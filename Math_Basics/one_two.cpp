#include <iostream>
#include <vector>
#include <map>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v(n);
        int twocount=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==2){
                twocount++;
            }
        }
        if(twocount==0){
            cout<<1<<endl;
        }
        else if(twocount%2!=0){
            cout<<-1<<endl;
        }
        else{
            int count=0;
            for(int i=0;i<v.size();i++){
                if(v[i]==2){
                    count++;
                }
                if(twocount/2==count){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
}