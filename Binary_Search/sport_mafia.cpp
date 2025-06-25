#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,k;
    cin>>n>>k;
    ll l=1;
    ll r=n;
    ll ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll sum=mid*(mid+1)/2;
        ll temp=sum-(n-mid);
        if(temp==k){
            ans=n-mid;
            break;
        }
        else if(temp>k){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}