#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N=1e18;

int main(){
    set<ll> s;
    for(ll i=1;i*i*i<N;i++){
        s.insert(i*i*i);
    }
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        bool a=true;
        for(ll i=1;i*i*i<=n;i++){
            if(s.count(n-i*i*i)){
                cout<<"YES"<<endl;
                a=false;
                break;
            }
        }
        if(a){
            cout<<"NO"<<endl;
        }
    }
}