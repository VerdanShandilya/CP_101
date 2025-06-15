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
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    vector<ll> prefix(n);
    prefix[0]=v[0].first;
    for(int i=1;i<n;i++){
        prefix[i]=v[i].first+prefix[i-1];
    }
    vector<ll> ans(n);
    for(int i=0;i<n;i++){
        ll j=i;
        ll found=i;
        while(j<n){
            pair<ll,ll> temp={prefix[j]+1,INT_MIN};
            ll idx=lower_bound(v.begin(),v.end(),temp)-v.begin();
            idx--;
            if(idx==j){
                break;
            }
            found+=idx-j;
            j=idx;
        }
        ans[v[i].second]=found;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}