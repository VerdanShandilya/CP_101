#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll odd=0;
    for(ll i = 0; i < n; i++){
        int a;
        cin>>a;
        v[i]=a;
        if(v[i]%2!=0){
            odd++;
        }
    }
    if(odd%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}