#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll helper(vector<ll> &v,int index){
    if(index>=v.size()){
        return 0;
    }
    ll ans=v[index]+helper(v,index+1);
    return ans;
}

int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<helper(v,v.size()-m);
}