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
    ll n;
    cin>>n;
    int q;
    cin>>q;
    vll v(n);
    for(auto &i : v) cin>>i;
    map<ll,ll> m;
    m[0]=1;
    ll sum=0;
    ll ans=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        ll req=sum-q;
        if(m.find(req)!=m.end()){
            ans+=m[req];
        }
        m[sum]++;
    }
    cout<<ans;
}

int main(){
    helper();
}