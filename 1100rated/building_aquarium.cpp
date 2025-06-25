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
    ll ans=0;
    ll l=1;
    ll r=*max_element(v.begin(),v.end())+k;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll cnt=0;
        for(int i=0;i<n;i++){
            if(v[i]<mid){
                cnt+=mid-v[i];
            }
        }
        if(cnt<=k){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
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