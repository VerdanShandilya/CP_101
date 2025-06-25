#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


void helper(vector<ll> &v,int index,int &m){
    if(index>=v.size()){
        return;
    }
    if(v[index]>m){
        m=v[index];
    }
    cout<<m<<" ";
    helper(v,index+1,m);
}

int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int m=v[0];
    helper(v,0,m);
}