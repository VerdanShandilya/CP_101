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
    for(int i=0;i<n;i++){
        if(i%4==0) cout<<"a";
        else if(i%4==1) cout<<'b';
        else if(i%4==2) cout<<'c';
        else cout<<'d';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    helper();
}