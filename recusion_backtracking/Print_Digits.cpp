#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


void helper(ll n){
    if(n==0){
        return;
    }
    helper(n/10);
    cout<<n%10<<" ";
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==0)
        cout<<0<<" ";
        else
        helper(n);
        cout<<endl;
    }
}