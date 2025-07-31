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
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    unordered_map<ll,ll> m;
    for(int i=0;i<n;i++){
        m[v[i]-i]++;
    }
    ll ans=0;
    for(auto i : m){
        ans+=(i.second*(i.second-1))/2;
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}