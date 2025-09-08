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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string temp=s; 
    reverse(all(s));

    if(temp<s){
        cout<<"YES"<<endl;
        return;
    }
    else if((temp>s || temp==s) && k==0){
        cout<<"NO"<<endl;
        return;
    }
    sort(all(temp));
    if(temp==s){
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