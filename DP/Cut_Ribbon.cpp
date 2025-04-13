#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;

ll helper(ll n, ll a, ll b,ll c,vector<int> &dp){
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    ll ansa=0;
    ll ansb=0;
    ll ansc=0;
    if(dp[n]!=-1){
        return dp[n];
    }
    ansa=1+helper(n-a,a,b,c,dp);
    ansb=1+helper(n-b,a,b,c,dp);
    ansc=1+helper(n-c,a,b,c,dp);
    return dp[n]=max({ansa,ansb,ansc});

}

int main(){
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> dp(n+1,-1);
    cout<<helper(n,a,b,c,dp);
}