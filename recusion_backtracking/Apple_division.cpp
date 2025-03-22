#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll res=LLONG_MAX;
void helper(vector<ll> &v,ll ans,ll index,ll mans){
    if(index>=v.size()){
        return;
    }
    res=min(res,abs(ans-mans));
    helper(v,ans-v[index],index+1,mans+v[index]);
    helper(v,ans,index+1,mans);
}

int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        ans+=v[i];
    }
    helper(v,ans,0,0);
    cout<<res<<endl;
}