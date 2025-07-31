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
    int con=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        con+=(abs(v[i]-v[i-1]));
    }
    allasc(v);
    int dig=0;
    int l=0;
    int r=n-1;
    while(con!=0){
        int temp =abs(v[l]-v[r]);
        if(temp>con){
            r--;
            continue;
        }
        con=con-temp;
        
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}

