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
    vector<ll> diff(2*1e6,0);
    while(n--){
        ll l,r;
        cin>>l>>r;
        diff[l]+=1;
        diff[r+1]-=1;
    }
    for(int i=1;i<diff.size();i++){
        diff[i]+=diff[i-1];
    }
    vector<ll> add(diff.size(),0);
    add[0]=diff[0];
    for(int i=1;i<add.size();i++){
        add[i]=add[i-1]+(diff[i]>=m);
    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        cout<<add[r]-((l-1>=0)?add[l-1]:0)<<endl;
    }
}

int main(){
    helper();
}