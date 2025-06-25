#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isprime(ll n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
    ll n;
    cin>>n;
    ll num1=0;
    ll num2=0;
    if(n%2==0){
        num1=4;
        num2=n-4;
    }
    else{
        for(ll i=4;i<n-4;i++){
            if(!isprime(i) && !isprime(n-i)){
                num1=i;
                num2=n-i;
            }
        }
    }
    cout<<num1<<" "<<num2<<endl;
}