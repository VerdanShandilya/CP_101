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
    ll n,x,y;
    cin>>n>>x>>y;
    if(x==y){
        cout<<0<<endl;
        return;
    }
    ll fx=n/x;
    ll fy=n/y;
    ll eq=(x/__gcd(x, y))*y;
    eq=n/eq;
    fx=fx-eq;
    fy=fy-eq;
    ll sumy=(fy*(fy+1))/2;
    ll sumx=fx*n-(fx*(fx-1))/2;
    cout<<sumx-sumy<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}

