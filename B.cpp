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
const int mod=998244353;

/*

if cnt of a == cnt of b 
ans = 0

if min(cnta,cntb)
*/

bool so(const pair<int,int> &a, const pair<int,int> &b) {
    if(a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

vll facto(1e6+1,0);

void fact(){
    facto[1]=1;
    for(int i=2;i<=1e6;i++){
        facto[i]=facto[i-1]*i;
        facto[i]=facto[i]%mod;
    }
}

int xorcon(int n){
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    return 0;
}

void fact(int n,unordered_map<int,int> &m){
    for(ll i=2;i*i<=n;i++){
        while(n%i==0){
            m[i]++;
            n/=i;
        }
    }
    if(n>1) m[n]++;
}

void helper(){
    ll n;
    cin>>n;
    vector<vector<int>> g(n);
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++){
            if(s[j]=='1'){
                if(j<i){
                    g[i].push_back(1);
                }
            }
            else{
                g[i].push_back(0);
            }
        }
    }

    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<g[i].size();j++){
            if(g[i][j]==1) cnt++;
        }
        v.push_back({cnt,i});
    }

    sort(all(v),so);
    for(int i=0;i<v.size();i++){
        cout<<v[i].second+1<<" ";
    }
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fact();
    ll t; cin>>t;
    while(t--) helper();
    return 0;
}