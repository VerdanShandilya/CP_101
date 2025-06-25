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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> prefix(n+1);
    prefix[0]=0;
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+v[i-1];
    }
    ll ans=0;
    for(int k=n;k>0;k--){
        if(n%k!=0){
            continue;
        }
        else{
            ll ma=0;
            ll mi=1e18;
            ll cnt=n/k;
            for(int j=0;j<n;j=j+cnt){
                ll sum=prefix[j+cnt]-prefix[j];
                ma=max(ma,sum);
                mi=min(mi,sum);
            }
            ans=max(ans,abs(ma-mi));
        }
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}