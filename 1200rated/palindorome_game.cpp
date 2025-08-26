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
    string s;
    cin>>s;
    int zero=0;
    for(int i=0;i<n;i++){
        zero += (s[i] == '0') ? 1 : 0;
    }
    if(zero==1){
        cout<<"BOB"<<endl;
        return;
    }
    if(zero%2==0){
        cout<<"BOB"<<endl;
        return;
    }
    cout<<"ALICE"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}