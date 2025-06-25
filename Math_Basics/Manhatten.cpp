#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        unordered_map<int,pair<int,int>> mup;
        int n,m;
        cin>>n>>m;
        int count=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                char c;
                cin>>c;
                if(c=='#'){
                    mup[count]={i,j};
                    count++;
                }
            }
        }
        if(count%2){
            count+=1;
        }
        int mid=count/2;
        int x=mup[mid].first;
        int y=mup[mid].second;
        cout<<x<<" "<<y<<endl;
    }

}