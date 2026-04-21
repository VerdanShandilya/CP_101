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
/*

*/
void helper(){
    ll n;
    cin>>n;

    vll v(n);
    for(auto & i : v) cin>>i;
    vll prefix(n+1,0);
    for(int i=0;i<n;i++){
        prefix[i+1]=prefix[i]+v[i];
    }
    vll temp;
    
    ll t;
    cin>>t;
    while(t--){
        ll type;
        cin>>type;
        ll a,b;
        if(type==1){
            cin>>a>>b;
        }
        else{
            cin>>a;
            if(temp.empty()) temp.push_back(a);
            else temp.push_back(temp[temp.size()-1]+a);
            continue;
        }

        ll l=a-temp.size();
        ll r=b-temp.size();
        if(l<1 && r<1){
            a--;b--;
            ll r1=temp.size()-a-1;
            ll l1=temp.size()-b-1;
            ll ans=temp[l1];
            if(r1>0) ans-=temp[r1-1];
            cout<<ans<<"\n";
            continue;
        }
        else if(l<1){
            ll ans=prefix[r];
            ll req=(b-a+1)-r;
            if(req-1>=0)
            ans+=temp[req-1];
            cout<<ans<<"\n";
            continue;
        }
        else{
            ll ans=prefix[r]-prefix[l-1];
            cout<<ans<<"\n";
            continue;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // fact();
    helper();
    return 0;
}