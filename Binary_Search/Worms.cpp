#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll t;
    cin>>t;
    vector<int> prefix(n,0);
    prefix[0]=v[0];
    for(int i=1;i<n;i++){
        prefix[i]=v[i]+prefix[i-1];
    }
    while(t--){
        int a;
        cin>>a;
        int l=0;
        int r=prefix.size();
        while(l<r){
            int mid=l+(r-l)/2;
            if(prefix[mid]<a){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        cout<<r+1<<endl;
    }
}