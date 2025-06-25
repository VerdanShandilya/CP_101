#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll n;
    cin>>n;
    vector<ll> v(n,0);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v[i]=a;
    }
    ll ans = 0;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            ans+=v[i-1]-v[i];
            v[i]=v[i-1];
        }
    }
    cout<<ans<<endl;
}