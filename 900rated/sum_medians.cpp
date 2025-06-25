#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
using ll = long long;
using namespace std;

void helper(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n*k);
    for(int i=0;i<n*k;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll ans=0;
    ll i=v.size()-1;
    ll gap=(n/2);
    while(k--){
        i=i-gap;
        ans+=v[i];
        i--;
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