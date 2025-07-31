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
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    vector<ll> u(m);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        cin>>u[i];
    }
    vector<ll> prefix(n);
    vector<ll> prefixsum(n);
    prefix[0]=v[0];
    prefixsum[0]=v[0];
    for(int i=1;i<n;i++){
        prefix[i]=max(prefix[i-1],v[i]);
        prefixsum[i]=prefixsum[i-1]+v[i];
    }
    for(int i=0;i<m;i++){
        int ind=upper_bound(prefix.begin(),prefix.end(),u[i])-prefix.begin();
        if(ind==0){
            cout<<0<<" ";
            continue;
        }
        cout<<prefixsum[ind-1]<<" ";
    }
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}