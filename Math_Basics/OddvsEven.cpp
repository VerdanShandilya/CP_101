#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin>>n;
    vector<string> v1(n);
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%4==0){
            v1[i]="Even";
        }
        else if(v[i]%2!=0){
            v1[i]="Odd";
        }
        else{
            v1[i]="Same";
        }
    }
    for(ll i=0;i<n;i++){
        cout<<v1[i]<<endl;
    }
}