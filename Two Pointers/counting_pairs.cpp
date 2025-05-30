#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll helper1(vector<ll> &v,ll k){
    ll ans=0;
    ll l=0;
    ll r=v.size()-1;
    while(l<r){
        if(v[l]+v[r]<=k){
            ans+=(r-l);
            l++;
        }
        else{
            r--;
        }
    }
    return ans;
}

void helper(){
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll sum=accumulate(v.begin(),v.end(),0LL);
    ll l=sum-y;
    ll r=sum-x;
    cout<<helper1(v,r)-helper1(v,l-1)<<endl;;

}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}