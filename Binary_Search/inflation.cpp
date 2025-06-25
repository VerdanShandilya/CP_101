#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool helper(vector<int> &v,ll k, ll sum){
    for(int i=1;i<v.size();i++){
        if(v[i]*100LL>(k*sum)){
            return false;
        }
        else{
            sum+=v[i];
        }
    }
    return true;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll l=0;
        ll r=1e15;
        ll ans=1e15;
        while(l<=r){
            ll mid=l+(r-l)/2;
            ll sum=mid+v[0];
            if(helper(v,k,sum)){
                ans=min(ans,mid);
                r=mid-1; 
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
}