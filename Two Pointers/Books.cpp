#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,t;
    cin>>n>>t;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    ll cans=0;
    ll l=0;
    ll r=0;
    while(r<n){
        cans+=v[r];
        while(cans>t){
            cans-=v[l];
            l++;
        }
        ans=max(ans,r-l+1);
        r++;
    }
    cout<<ans<<endl;
}