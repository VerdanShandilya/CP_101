#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin>> n;
    vector<ll> ans;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        ll mi = max(x,y);
        ll m = (mi*mi)-mi+1;  //n^2-n + 1 
        if(mi%2!=0){
            ans.push_back(m+(m-x)-(m-y));
    
        }
        else{
            ans.push_back(m-(m-x)+(m-y));
        }
    }
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}