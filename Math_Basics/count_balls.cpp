#include <iostream>
#include <vector>
#include <queue>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll total=a+b;
    ll ans = a*(n/total);
    n=n%total;
    if(a>n){
        ans=ans+n;
    }
    else{
        ans=ans+a;
    }
    cout<<ans<<endl;
}