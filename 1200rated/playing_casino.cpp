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
    vector<vector<ll>> v(n, vector<ll> (m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            v[i][j]=a;
        }
    }
    ll ans=0;
    for(int i=0;i<m;i++){
        vll prefix;
        int s=0;
        vll col;

        for(int j=0;j<n;j++){
            col.push_back(v[j][i]);
        }
        sort(col.begin(),col.end());

        prefix.push_back(col[0]);
        for(int j=1;j<col.size();j++){
            prefix.push_back(col[j]+prefix[j-1]);
        }

        for(int k=0;k<prefix.size();k++){
            int rem=n-k-1;
            ll temp=col[k]*rem;
            ll remsum=prefix[prefix.size()-1]-prefix[k];
            ans+=abs(remsum-temp);
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