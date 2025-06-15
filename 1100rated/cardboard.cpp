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
    ll r=1e9;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll sum=0;
        for(int i=0;i<n;i++){
            ll side=v[i] + 2*mid;
            sum+=side*side;
            if(sum>k)
            break;
        }
        if(sum==k){
            ans=mid;
            break;
        }
        else if(sum<k){
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