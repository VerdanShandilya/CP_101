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
    ll n,d;
    cin>>n>>d;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll l=-1;
    ll r=n-1;
    ll ans=0;
    ll sum=0;
    ll players=1;
    while(l<r){
        if(players*v[r]<=d && l<r){
            players++;
            l++;
        }
        else{
            ans++;
            players=1;
            r--;
        }
    }
    cout<<ans<<endl;
}

int main(){
    helper();
}