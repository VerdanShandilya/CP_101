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
    string s,a;
    cin>>s>>a;
    int ans=0;
    for(int i=1;i<n-1;i++){
        if((s[i]=='.' && s[i-1]=='.' && s[i+1]=='.') && (a[i]=='.' && a[i-1]=='x' && a[i+1]=='x')){
            ans++;
        }
    }
    for(int i=1;i<n-1;i++){
        if((a[i]=='.' && a[i-1]=='.' && a[i+1]=='.') && (s[i]=='.' && s[i-1]=='x' && s[i+1]=='x')){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    helper();
}