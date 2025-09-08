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
    ll n,x,m;
    cin>>n>>x>>m;
    int l=x;
    int r=x;
    while(m--){
        int a,b;
        cin>>a>>b;
        if(r<=b && r>=a){
            r=b;
        }
        if(l>=a && l<=b){
            l=a;
        }
    }
    int ans=r-l+1;
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}