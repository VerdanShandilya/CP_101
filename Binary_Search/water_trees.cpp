#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int helper(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll l=0;
    ll r=1e9;
    ll ans=0;
    ll maxi=*max_element(v.begin(),v.end());
    ll requireo=0;
    ll requiree=0;
    for(int i=0;i<n;i++){
        ll diff=maxi-v[i];
        if(diff%2!=0){
            requireo++;
        }
        diff--;
        requiree+=diff/2;
    }
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll count=0;
        ll oddday=0;
        ll evenday=0;
        if(mid%2==0){
            oddday=evenday=mid/2;
        }
        else{
            oddday=mid/2+1;
            evenday=mid/2;
        }
        if(evenday)
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}