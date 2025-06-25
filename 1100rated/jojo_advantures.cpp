#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
using ll = long long;
using namespace std;

const int MOD = 1e9+7;

void helper(){
    string s;
    cin>>s;
    ll n=s.size();
    ll l=0;
    ll r=0;
    ll ans=0;
    ll temp=0;
    while(r<n){
        if(s[r]=='1'){
            temp++;
        }
        else{
            temp=0;
            l=r;
        }
        r++;
        ans=max(ans,temp);
    }
    ans=max(ans,temp);
    l=0;
    while(s[l]=='1'){
        l++;
    }
    r=n-1;
    while(r>l && s[r]=='1'){
        r--;
    }
    ans=max(ans,l+(n-r-1));
    if(ans==n){
        ll x=n*n;
        cout<<x<<endl;
        return;
    }
    if(ans==0){
        cout<<0<<endl;
        return;
    }
    ll res=1;
    l=1;
    while(ans>0){
        res=max(res,l*ans);
        ans--;
        l++;
    }
    cout<<res<<endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--)
        helper();
}
