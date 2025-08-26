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

void helper(vector<vector<ll>> &g,vector<ll> &cnt,int color,int node,int pnode){
    cnt[color]++;
    for(int i=0;i<g[node].size();i++){
        if (g[node][i]!=pnode)
        helper(g,cnt,!color,g[node][i],node);
    }
}

int main(){
    ll n;
    cin>>n;
    vector<vector<ll>> g(n+1);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<ll> cnt(2,0);
    helper(g,cnt,0,1,1);
    ll ans=cnt[0]*cnt[1]-(n-1);
    cout<<ans;
}