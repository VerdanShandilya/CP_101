#include <iostream>
#include <numeric> 
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;    
        if(2*l<=r){
            cout<<l<<" "<<2*l<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
}