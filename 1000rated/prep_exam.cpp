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
    ll n,m,k;
    cin>>n>>m>>k;
    set<int> s;
    vi v(m);
    for(auto &i : v) cin>>i;

    for(int i=0;i<k;i++){
        int z;
        cin>>z;
        s.insert(z);
    }
    if((n-k)>1){
        for(int i=0;i<m;i++){
            cout<<'0';
        }
        cout<<endl;
        return;
    }
    if(n==k){
        for(int i=0;i<m;i++){
            cout<<'1';
        }
        cout<<endl;
        return;
    }
    string ans="";
    for(int i=0;i<m;i++){
        if(s.find(v[i])!=s.end()){
            ans+='0';
        }
        else{
            ans+='1';
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