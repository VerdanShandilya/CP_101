#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


bool isprime(ll n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            v.push_back(i);
        }
    }
    ll l=0;
    ll r=0;
    while(r<v.size()){
        if(r-l+1<2){
            r++;
        }
        else{
            if(isprime(v[l]+v[r]+1) && v[l]+v[r]+1<=n){
                k--;
            }
            r++;
            l++;
        }
    }
    if(k<=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}