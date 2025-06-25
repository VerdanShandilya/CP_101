#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
#include <cmath>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

void helper(){
    ll k;
    cin>>k; 
    ll l=k;
    ll r=2e18;
    ll ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll bulbs=mid-(int)sqrt(mid);
        if(bulbs>=k){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
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