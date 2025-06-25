#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;



void helper(){
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll wins = 0, sum = 0;
    ll start=0;
    ll end=0;
    while(end<v.size()){
        sum+=v[end];
        while(sum>r){
            sum-=v[start];
            start++;
        }
        if(sum>=l && sum<=r){
            sum=0;
            wins++;
            start=end+1;
        }
        end++;
    }
    cout<<wins<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}