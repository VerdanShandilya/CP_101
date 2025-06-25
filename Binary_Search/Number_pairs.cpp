#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N=1e18;

void helper(){
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        auto high=upper_bound(v.begin()+i+1,v.end(),r-v[i]);
        auto low=lower_bound(v.begin()+i+1,v.end(),l-v[i]);
        ans+=(high-low);
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}