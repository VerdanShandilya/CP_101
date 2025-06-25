#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,s;
    cin>>n>>s;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll l=0;
    ll r=n;
    ll ans=0;
    ll ans1=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll sum=0;
        vector<ll> b(n);
        for(int i=0;i<n;i++){
            b[i]=v[i]+((i+1)*mid);
        }
        sort(b.begin(),b.end());
        ll count=0;
        for(int i=0;i<mid;i++){
            sum+=b[i];
        }
        if(sum<=s){
            ans=mid;
            ans1=sum;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<" "<<ans1<<endl;
}