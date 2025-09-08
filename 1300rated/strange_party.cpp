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
    ll n,m;
    cin>>n>>m;
    vector<int> v(n);
    vector<int> c(m);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    alldesc(v);
    ll ans=0;
    int j=0;
    for(int i=0;i<n;i++){
        int cost=c[v[i]-1];
        int pres=c[j];
        if(pres<cost){
            ans+=pres;
            j++;
        }
        else{
            ans+=cost;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}