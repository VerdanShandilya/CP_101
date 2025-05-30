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
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll sum=0;
    ll sum1=0;
    for(int i=0;i<n;i++){
        sum+=ceil((double)v[i]/x);
        sum1+=v[i];
    }
    ll ans=ceil((double)sum1/x);
    cout<<ans<<" "<<sum<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}