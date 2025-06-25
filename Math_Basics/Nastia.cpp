#include <iostream>
#include <vector>
#include <map>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll x=0;
        ll y=0;
        ll ma = max(a,b);
        x=a*b;
        y=x+a;
        if((y+x)%b==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<x+y<<endl;
        }
    }
}