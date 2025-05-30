#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool helper(vector<ll> &v,ll mid,ll k){
    ll len=v.size();
    ll val=v[len/2]+mid;
    ll rem=k-mid;
    ll count=0;
    for(int i=(len/2)+1;i<len;i++){
        if(val>v[i]){
            count+=(val-v[i]);
        }
    }
    return count<=rem;
}

int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll len=v.size();
    ll l=0;
    ll r=k;
    ll ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(helper(v,mid,k)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }

    }
    cout<<ans+v[n/2]<<endl;
}