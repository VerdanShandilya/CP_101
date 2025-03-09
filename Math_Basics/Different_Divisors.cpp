#include <iostream>
#include <vector>
#include <map>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isprime(ll n){
    if(n <= 1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll d;
        cin>>d;
        ll a=1;
        ll b=0;
        ll c=0;
        for(int i=a+d;;i++){
            if(isprime(i)){
                b=i;
                break;
            }
        }
        for(int i=b+d;;i++){
            if(isprime(i)){
                c=i;
                break;
            }
        }
        cout<<b*c<<endl;
    }
}