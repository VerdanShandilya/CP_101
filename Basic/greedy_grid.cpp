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
    if(n==1 || m==1){
        cout<<"NO"<<endl;
    }
    else if(n==2 && m==2){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}