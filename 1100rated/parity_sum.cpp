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
    vi v(n);
    for(auto &i : v) cin>>i;
    ll l=0,g=0;
    ll ans=0;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(v[i]%2!=0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<0<<endl;
        return;
    }
    flag=true;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<0<<endl;
        return;
    }
    ll maxodd=0;
    allasc(v);
    for(int i=0;i<n;i++){
        if(v[i]%2!=0){
            maxodd=v[i];
        }
    }
    allasc(v);

    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            if(maxodd>v[i]){
                maxodd=v[i]+maxodd;
                v[i]=v[i]+maxodd;
                ans++;
            }
        }
    }
    allasc(v);
    bool temp=true;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            ans++;
            temp=false;
        }
    }
    if(temp){
        cout<<ans<<endl;
        return;
    }
    cout<<ans+1<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    helper();
}