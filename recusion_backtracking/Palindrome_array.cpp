#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool helper(vector<ll> &v,int i,int j){
    if(i>=j){
        return true;
    }
    if(v[i]!=v[j]){
        return false;
    }
    bool ans = helper(v,i+1,j-1);
    return ans;
}

int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(helper(v,0,v.size()-1)){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
}