#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

void helper(vector<ll> &v,ll k){
    auto upper=upper_bound(v.begin(),v.end(),k);
    ll index=upper-v.begin();
    cout<<index<<" ";
}

int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while(q--){
        ll k;
        cin>>k;
        helper(v,k);
    }
}