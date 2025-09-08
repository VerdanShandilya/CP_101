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
    int q;
    cin>>q;
    vi v(n);
    for(auto &i : v) cin>>i;

    vll prefix(n);
    prefix[0]=v[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+v[i];
    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--; r--;
        cout<< prefix[r] - ((l==0) ? 0 : prefix[l-1])<<endl;
    }
}

int main(){
    helper();
}