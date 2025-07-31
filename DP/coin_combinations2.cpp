#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;

int const mod=1e9+7;

ll helper(int k,vector<vector<int>> &dp,vector<int> &v,int index){
    if(k==0)
    return 1;

    if(k<0)
    return 0;
    if(dp[k][index]!=-1){
        return dp[k][index];
    }
    ll a=helper(k-v[index],dp,v,index);
    ll b=helper(k,dp,v,index+1);
    return dp[k][index]=(a+b)%mod;
}

int main(){
    ll n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>> dp(k, vector<int> (v.size(),-1));
    cout<<helper(k,dp,v,0);
}