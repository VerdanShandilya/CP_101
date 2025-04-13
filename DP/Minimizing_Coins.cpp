#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;

int helper(vector<int> &v,vector<vector<int>> &dp,int index,ll amount){
    if(amount==0){
        return 0;
    }
    if(index>=v.size() || amount<0){
        return INT_MAX-1;
    }
    if(dp[index][amount]!=-1){
        return dp[index][amount];
    }
    int a=INT_MAX;
    if(amount-v[index]>=0){
        a=1+helper(v,dp,index,amount-v[index]);
    }
    int b = helper(v,dp,index+1,amount);
    return dp[index][amount]=min(a,b);
}

int main(){
    int n,amount;
    cin>>n>>amount;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>> dp(n, vector<int> (amount+1,-1));
    ll ans=helper(v,dp,0,amount);
    if(ans==INT_MAX-1){
        cout<<-1;
    }
    cout<<ans;
}