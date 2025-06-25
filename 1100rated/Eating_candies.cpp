#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <climits>
#include <set>
using ll = long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    if(n==2){
        if(v[0]==v[1]){
            cout<<2<<endl;
        }
        else{
            cout<<0<<endl;
        }
        return;
    }
    ll l=1;
    ll r=n-2;
    ll ans=0;
    ll lsum=v[0];
    ll rsum=v[n-1];
    while(l<=r){
        while(l<=r && lsum<rsum){
            lsum+=v[l];
            l++;
        }
        while(l<=r && rsum<lsum){
            rsum+=v[r];
            r--;
        }
        if(rsum==lsum){
            ans=max(ans,l+(n-r-1));
            lsum+=v[l];
            l++;
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