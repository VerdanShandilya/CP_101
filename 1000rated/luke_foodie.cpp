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
    ll n,k;
    cin>>n>>k;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=0;
    int l=v[0]-k;
    int r=v[0]+k;
    for(int i=0;i<n;i++){
        int tl=v[i]-k;
        int tr=v[i]+k;
        l=max(l,tl);
        r=min(r,tr);
        if(l>r){
            ans++;
            l=tl;
            r=tr;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}