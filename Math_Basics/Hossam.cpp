#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
using ll = long long;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        unordered_map<ll,ll> m;
        for(int i=0;i<n;i++){
            cin>>v[i];
            m[v[i]]++;
        }
        sort(v.begin(),v.end());
        ll count=m[v[0]];
        ll mcount=m[v[v.size()-1]];
        ll ans=0;
        if(v[0]==v[v.size()-1]){
            ans=(count*(mcount-1));
        }
        else{
            ans=2*(count*mcount);
        }
        cout<<ans<<endl;
    }
}