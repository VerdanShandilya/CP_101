#include <iostream>
#include <vector>
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
    ll n;
    cin>>n;
    if(n==1){
        cout<<3<<endl;
    }
    else if(n%2!=0){
        cout<<1<<endl;
    }
    else{
        for(int i=1;i<=1000;i++){
            if(!isprime(n*i+1)){
                cout<<i<<endl;
                break;
            }
        }
    }
}