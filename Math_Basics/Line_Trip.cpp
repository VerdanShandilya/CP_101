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
        ll n,x;
        cin>>n>>x;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=0;
        for(int i=1;i<n;i++){
            ans=max(ans,v[i]-v[i-1]);
        }
        ans=max(ans,2*(x-v[v.size()-1]));
        ans=max(ans,v[0]-0);
        cout<<ans<<endl;
    }
}