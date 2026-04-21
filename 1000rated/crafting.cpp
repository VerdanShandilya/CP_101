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
    vi r(n);
    for(auto &i : v) cin>>i;
    for(auto &i : r) cin>>i;
    ll m=INT_MAX;
    ll req=-1;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(r[i]>v[i]){
            if(flag){
                cout<<"NO"<<endl;
                return;
            }
            flag=true;
            req=r[i]-v[i];
        }
        else{
            ll temp=v[i]-r[i];
            m=min(m,temp);
        }
    }
    if(req<=m){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    helper();
}