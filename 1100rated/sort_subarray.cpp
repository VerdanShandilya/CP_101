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
    vector<ll> v(n),b(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll l=0;
    ll r=n-1;
    ll ans=0;
    while(v[l]==b[l]){
        l++;
    }
    while(l>0 && b[l]>=b[l-1]){
        l--;
    }
    while(v[r]==b[r]){
        r--;
    }
    while(r<n-1 && b[r]<b[r+1]){
        r++;
    }
    cout<<l+1<<" "<<r+1<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}