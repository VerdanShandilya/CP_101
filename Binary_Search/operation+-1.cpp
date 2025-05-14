#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N=1e18;

ll helper(vector<ll> &v,ll q,vector<ll> &prefix){
    ll ans=0;
    auto high=upper_bound(v.begin(),v.end(),q);
    if(high==v.end()){
        return (v.size()*q)-prefix[prefix.size()-1];
    }
    else if(high==v.begin()){
        return prefix[prefix.size()-1]-(v.size()*q);
    }
    else{
        int index=high-v.begin();
        ans+=((index*q)-(prefix[index-1]));
        ans+=((prefix[prefix.size()-1]-prefix[index-1])-((v.size()-index)*q));
    }
    return ans;
}

int main(){
    ll n,t;
    cin>>n>>t;
    vector<ll> v(n);
    vector<ll> prefix(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    prefix[0]=v[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+v[i];
    }
    while(t--){
        ll q;
        cin>>q;
        cout<<helper(v,q,prefix)<<endl;
    }
}