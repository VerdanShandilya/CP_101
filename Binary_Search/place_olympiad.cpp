#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

void helper(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll l=1;
    ll r=m;
    ll ans=m;
    while(l<=r){
        ll mid= l+(r-l)/2;
        ll ben=0;
        for(int i=0;i<n;i++){
            ben+=(mid*(m/(mid+1)));
            ben+=m%(mid+1);
        }
        if(ben>=k){
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
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}