#include <bits/stdc++.h>
#include <algorithm>
using ll = long long;
using namespace std;
#define allasc(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define alldesc(v) sort(v.rbegin(), v.rend())
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vp vector<pair<int,int>>
const int mod=1e9+7;


void helper(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin>>n>>q;
    vi v(n);
    for(auto &i : v) cin>>i;
    vll diff(n+1,0);
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--;
        r--;
        diff[l]+=1;
        diff[r+1]-=1;
    }
    for(int i=1;i<n;i++){
        diff[i]=diff[i]+diff[i-1];
    }
    alldesc(v);
    alldesc(diff);
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=(ll)(v[i]*diff[i]);
    }
    cout<<ans;
}

int main(){
    helper();
}