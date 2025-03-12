#include <iostream>
#include <vector>
#include <string>
#include <cmath>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll ans=0;
        if(n<=k){   
            ans=ceil((k*1.0)/n);
        }
        else{
            int num=ceil((n*1.0)/k)*k;
            ans=ceil((num*1.0)/n);
        }
        cout<<ans<<endl;
    } 
}