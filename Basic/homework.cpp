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
    ll a;
    cin>>a;
    string n;
    cin>>n;
    ll b;
    cin>>b;
    string m,o;
    cin>>m>>o;
    for(int i=0;i<o.size();i++){
        if(o[i]=='V')
            n=m[i]+n;
        else
            n=n+m[i];
    }
    cout<<n<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}