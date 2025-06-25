#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

void helper(){
    ll w,b;
    cin>>w>>b;
    ll totalpins=w+b;
    ll l=0;
    ll r=1e9;
    ll ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll pinsneeded=mid*(mid+1)/2;
        if(totalpins>=pinsneeded){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}