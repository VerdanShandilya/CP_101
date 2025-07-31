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
    ll si=(n*(n-1))/2;
    vi v(si);
    for(int i=0;i<si;i++){
        cin>>v[i];
    }
    allasc(v);
    n=n-1;
    int i=0;
    while(n>0){
        cout<<v[i]<<" ";
        i+=n;
        n--;
    }
    cout<<v[v.size()-1];
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}

