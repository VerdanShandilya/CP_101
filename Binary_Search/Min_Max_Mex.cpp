#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int l=0;
        int r=v.size()-1;
        while(l<r){
            int mid=l+(r-l)/2;
            for(int i=0;i<mid;i++){
                
            }
        }
    }
}