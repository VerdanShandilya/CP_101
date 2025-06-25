#include <iostream>
#include <vector>
#include <map>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    map<ll,ll> m;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]=0;
    }
    vector<ll> ans(n,0);
    ll candy = k/n;
    for(auto &i:m){
        i.second=candy;
    }
    candy = k%n;
    ll i =0;
    for(auto &j:m){
        if(candy!=0)
        j.second+=1;
        else
        break;
        candy--;
    }
    for(ll j=0;j<n;j++){
        cout<<m[v[j]]<<endl;
    }
}