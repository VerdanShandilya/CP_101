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
    for(int i=0;i<n;i++){
        cin>>v[i]; 
    }
    set<ll> s;
    ll prefix=0;
    for(int i=0;i<n;i++){
        if(i%2==0)
        prefix+=v[i];
        else
        prefix-=v[i];
        if(prefix==0 || s.find(prefix)!=s.end()){
            cout<<"YES"<<endl;
            return;
        }
        s.insert(prefix);
    }
    cout<<"NO"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}