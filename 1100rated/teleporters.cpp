#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
using ll = long long;
using namespace std;

void helper(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> req(n);
    for(int i=0;i<n;i++){
        req[i]=v[i]+i+1;
    }
    ll l=0;
    ll r=0;
    ll ans=0;
    ll sum=0;
    sort(req.begin(),req.end());
    while(r<n){
        sum+=req[r];
        while(sum>k){
            sum-=req[l];
            l++;
        }
        ans=max(ans,r-l+1);
        r++;
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}