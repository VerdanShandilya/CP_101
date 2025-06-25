
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <climits>
using ll = long long;
using namespace std;

void helper(){
    ll x,y,k;
    cin>>x>>y>>k;
    ll torches=(y*k)+k-1;
    ll ans=ceil(torches/(x-1))+k;
    cout<<ans<<endl;;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}