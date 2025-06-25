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
    sort(v.begin(),v.end());
    vector<ll> prefix(n+1);
    prefix[0]=0;
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+v[i-1];
    }
    ll l=0;
    ll ans=1e18;
    for(int i=0;i<=k;i++){
        ll l=i*2;
        ll r=k-i;
        ll sum=prefix[l]+prefix[n]-prefix[n-r];
        ans=min(ans,sum);
    }
    cout<<prefix[n]-ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}