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
    ll n,m,q;
    cin>>n>>m>>q;
    vi v(n);
    for(auto &i : v) cin>>i;
    vll diff(n+1,0);
    vector<vector<int>> query;
    for(int i=0;i<m;i++){
        int l,r,d;
        cin>>l>>r>>d;
        query.push_back({l-1,r-1,d});
    }
    vll times(m+1,0);
    while(q--){
        ll s,e;
        cin>>s>>e;
        s--;
        e--;
        times[s]+=1;
        if (e+1 <= m-1) times[e+1] -= 1;
    }
    for(int i=1;i<m;i++){
        times[i]=times[i-1]+times[i];
    }
    for(int i=0;i<m;i++){
        int num=times[i];
        ll l=query[i][0];
        ll r=query[i][1];
        ll d=query[i][2];
        diff[l]+=(ll)(d*num);
        diff[r+1]-=(ll)(d*num);
    }
    for(int i=1;i<n;i++){
        diff[i]=diff[i]+diff[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<diff[i]+v[i]<<" ";
    }
}

int main(){
    helper();
}