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

ll ans(vi &v,vll &prefix,int l ,int r){
    l--; r--;
    return prefix[r] - ((l==0) ? 0 : prefix[l-1]);
}

void helper(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vi v(n);
    for(auto &i : v) cin>>i;
    int q;
    cin>>q;
    vi s=v;
    allasc(s);
    vll prefix(n);
    prefix[0]=v[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+v[i];
    }
    vll p(n);
    p[0]=s[0];
    for(int i=1;i<n;i++){
        p[i]=p[i-1]+s[i];
    }
    while(q--){
        int a,l,r;
        cin>>a>>l>>r;
        if(a==1)
        cout<<ans(v,prefix,l,r)<<endl;
        else
        cout<<ans(s,p,l,r)<<endl;
    }
}

int main(){
    helper();
}