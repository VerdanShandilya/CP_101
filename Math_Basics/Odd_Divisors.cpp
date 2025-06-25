#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool helper(ll x){
    if(x==1){
        return false;
    }
    if(x%2!=0 && x!=1){
        return true;
    }

    return helper(x/2);
}

int main(){
    ll n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        if(helper(x)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}