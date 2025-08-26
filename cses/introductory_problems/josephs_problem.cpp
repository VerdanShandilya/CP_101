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
    ll n;
    cin>>n;
    vector<ll> nxt(n+1);
    for(int i=1;i<nxt.size();i++){
        nxt[i]= (i==n)? 1 : i+1;
    }
    vector<int> ans;
    int cur=1, alive=n;
    while(alive>1){
        int kill=nxt[cur];
        ans.push_back(kill);
        nxt[cur]=nxt[kill];
        cur=nxt[kill];
        alive--;
    }
    ans.push_back(cur);   
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    helper();
}