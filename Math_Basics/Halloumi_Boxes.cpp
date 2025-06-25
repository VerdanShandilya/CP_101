#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool a=true;
        if(k>1){
            cout<<"Yes"<<endl;
            a=false;
        }
        else{
            for(int i=1;i<n;i++){
                if(v[i]<v[i-1]){
                    cout<<"No"<<endl;
                    a=false;
                    break;
                }
            }
        }
        if(a){
            cout<<"Yes"<<endl;
        }
    }
}