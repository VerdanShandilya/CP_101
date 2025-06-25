#include <iostream>
#include <vector>
#include <queue>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (){
    ll a,b;
    cin>>a>>b;
    ll suma=0,sumb=0;
    while(a && b){
        suma+=a%10;
        sumb+=b%10;
        a/=10;
        b/=10;
    }
    cout<<max(suma,sumb)<<endl;
}