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
    ll n,l,r;
    cin>>n>>l>>r;
    vi v(n);
    for(auto &i : v) cin>>i;
    vi left,right;
    for(int i=0;i<r;i++){
        left.push_back(v[i]);
    }
    for(int i=l-1;i<n;i++){
        right.push_back(v[i]);
    }
    allasc(left);
    allasc(right);
    ll lm=0,rm=0,range=0;
    for(int i=0;i<r-l+1;i++){
        lm+=left[i];
    }
    for(int i=0;i<r-l+1;i++){
        rm+=right[i];
    }
    for(int i=l-1;i<r;i++){
        range+=v[i];
    }
    cout<<min({lm,rm,range})<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    helper();
}