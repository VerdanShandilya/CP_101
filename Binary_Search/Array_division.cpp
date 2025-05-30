#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll l=*max_element(v.begin(),v.end());
    ll r=accumulate(v.begin(),v.end(),0LL);
    ll ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll sum=0;
        ll divs=1;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
            if(sum>mid){
                divs++;
                sum=v[i];
            }
        }
        if(divs<=k){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}