#include <iostream>
#include <vector>
#include <map>
#include <string>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a,b;
    cin>>a>>b;
    if(a==0 && b>=5){
        cout<<0<<endl;
    }
    else {
        ll c=b-a;
        if(c>=5){
            cout<<0<<endl;
        }
        else{
            ll prod = 1;
            for (ll i = a + 1; i <= b; i++) {
                prod *= (i % 10);
                prod %= 10;
            }
            cout<<prod<<endl;
        }
    }
}