#include <iostream>
#include <vector>
#include <map>
#include <string>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n<3){
            cout<<n+1<<endl;
        }
        else if(n<15){
            cout<<3<<endl;
        }
        else if(n%15==0){
            cout<<(n/15)*3+1<<endl;
        }
        else if(n%15==1){
            cout<<(n/15)*3+2<<endl;
        }
        else{
            cout<<(n/15)*3+3<<endl;
        }
    }
}