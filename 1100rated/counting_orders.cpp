#include <bits/stdc++.h>
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
const int mod=1e9+7;


void helper(){
    ll n;
    cin>>n;
    vi v(n);
    vi a(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++) cin>>a[i];

    allasc(v);
    alldesc(a);

    ll ans=1;
    for(int i=0;i<a.size();i++){
        int ind = upper_bound(all(v),a[i])-v.begin();
        ll val = n-ind -i;
        if (val<=0){
            cout<<0<<'\n';
            return;
        }
        if(ind>=n)
        continue;
        ans=(ans*val)%mod;
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}