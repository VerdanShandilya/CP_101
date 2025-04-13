#include <iostream>
#include <vector>
#include <map>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        int ans = 1, cur = 1;
        while (cur<n) {
            cur=cur*2+2;
            ans++;
        }
        cout<<ans<<endl;
    }
}