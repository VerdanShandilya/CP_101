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
    vector<ll> c(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    c.push_back(0);
    vector<ll> prefix(n+1,0);
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+v[i-1];
    }
    ll ans=prefix[1]+((k-1)*c[0]);
    ll summax=c[0];
    ll i=2;
    while(i<prefix.size() && i<=k){
        summax=max(summax,c[i-1]);
        ll sum=prefix[i]+((k-i)*summax);
        ans=max(ans,sum);
        i++;
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}