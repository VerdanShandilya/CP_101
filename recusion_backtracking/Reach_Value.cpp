#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


bool helper(ll n,ll num){
    if(num==n){
        return true;
    }
    if(num>n){
        return false;
    }
    bool a=helper(n,num*10);
    bool b=helper(n,num*20);
    return a || b;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(helper(n,1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}