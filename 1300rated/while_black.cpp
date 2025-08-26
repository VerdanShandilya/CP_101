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

int ans=0;

int helper(vector<vector<ll>> &g,int node,string &s){

    if(g[node].size()==0){
        if(s[node-1]=='W') return 1;
        if(s[node-1]=='B') return -1;
    }
    int cnt=0;
    for(int i=0;i<g[node].size();i++){
        cnt+=helper(g,g[node][i],s);
    }
    cnt+=(s[node-1]== 'W' ? 1 : -1);
    if(cnt==0) ans++;
    return cnt;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ans=0;
        ll n;
        cin>>n;
        vector<vector<ll>> g(n+1);

        for(int i=0;i<n-1;i++){
            int temp; cin>>temp;
            g[temp].push_back(i+2);
        }

        string s;
        cin>>s;
        helper(g,1,s);
        cout<<ans<<endl;;
    }
}