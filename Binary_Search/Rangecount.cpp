#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

void helper(unordered_map<ll,vector<ll>> &m){
    ll l,r,x;
    cin>>l>>r>>x;
    const auto& v=m[x];
    auto high=upper_bound(v.begin(),v.end(),r-1);
    auto low=lower_bound(v.begin(),v.end(),l-1);
    auto index=high-v.begin();
    auto index1=low-v.begin();
    cout<<index-index1<<endl;
}

int main(){
    ll n;
    cin>>n;
    unordered_map<ll,vector<ll>> m;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        m[x].push_back(i);
    }
    ll q;
    cin>>q;
    while(q--){
        helper(m);
    }
}