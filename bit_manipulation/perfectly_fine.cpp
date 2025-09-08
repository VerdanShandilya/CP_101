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
    int st=INT_MAX;
    int e=INT_MAX;
    int b=INT_MAX;
    while(n--){
        ll a;
        cin>>a;
        string s;
        cin>>s;
        if(s=="11" && a<b){
            b=a;
        }
        else if(s=="01" && a<st){
            st=a;
        }
        else if(s=="10" && a<e){
            e=a;
        }
    }
    if((st==INT_MAX || e==INT_MAX) && b==INT_MAX){
        cout<<-1<<endl;
        return;
    }
    if((st==INT_MAX || e==INT_MAX) && b!=INT_MAX){
        cout<<b<<endl;
        return;
    }
    int ans=st+e;
    cout<<min(b,ans)<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}