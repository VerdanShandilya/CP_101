#include <iostream>
#include <numeric> 
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

void helper(ll n){
    for(int i=2;i<n-2;i++){
        int a = i;
        int b = n-a;
        if(gcd(a,b)==1){
            if(a!=b && b!=1 && a!=1 && a+b+1==n+1){
                cout<<a<<" "<<b<<" "<<1<<endl;
                break;
            }
        }
    }
}

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        helper(n-1);
    }
}