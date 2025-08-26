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
    ll n,x,k;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    int i=0;
    for(int i=0;i<n;i++){
        x+= (s[i]=='L'? -1: 1);
        --k;
        if(!x){
            break;
        }
    }
    ll ans=0;
    if(!x){
        ans=1;
        for(int i=0;i<s.size();i++){
            x+=(s[i]=='L'?-1:1);
            if(!x){
                ans+=k/(i+1);
                break;
            }
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