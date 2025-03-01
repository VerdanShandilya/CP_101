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
        ll diagnol = (mi*mi)-mi+1;  //n^2-n + 1 
        if(mi%2!=0){
            if(x<y){
                ans.push_back(diagnol+(y-x));
            }
            else if(y<x){
                ans.push_back(diagnol-(x-y));
            }
            else{
                ans.push_back(diagnol);
            }
        }
        else{
            if(x<y){
                ans.push_back(diagnol-(y-x));
            }
            else if(y<x){
                ans.push_back(diagnol+(x-y));
            }
            else{
                ans.push_back(diagnol);
            }
        }
    }
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}