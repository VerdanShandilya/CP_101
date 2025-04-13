#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;

int const mod=1e9+7;

ll helper(int n,vector<int> &dp){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    ll a=helper(n-1,dp);
    ll b=helper(n-2,dp);
    ll c=helper(n-3,dp);
    ll d=helper(n-4,dp);
    ll e=helper(n-5,dp);
    ll f=helper(n-6,dp);
    return dp[n]=(a+b+c+d+e+f)%mod;
}

int main(){
    ll n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<helper(n,dp)%mod;
}