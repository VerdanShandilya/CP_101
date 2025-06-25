#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;

int helper(vector<int> &v,int index,int gym,int con,vector<vector<vector<int>>> &dp){
    if(index>=v.size()){
        return 0;
    }
    int ans=INT_MAX;
    int a=INT_MAX;
    int b=INT_MAX;
    if(dp[index][gym][con]!=-1){
        return dp[index][gym][con];
    }
    if(v[index]==0){
        ans=1+helper(v,index+1,0,0,dp);
    }
    else if(v[index]==1){
        ans=1+helper(v,index+1,0,0,dp);
        if(con!=1)
        a=helper(v,index+1,0,1,dp);
    }
    else if(v[index]==2){
        ans=1+helper(v,index+1,0,0,dp);
        if(gym!=1)
        a=helper(v,index+1,1,0,dp);
    }
    else{
        ans=1+helper(v,index+1,0,0,dp);
        if(gym!=1)
        a=helper(v,index+1,1,0,dp);
        if(con!=1)
        b=helper(v,index+1,0,1,dp);
    }
    return dp[index][gym][con]=min(ans,min(a,b));
}

int main(){
    ll n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<vector<int>>> dp(v.size(), vector<vector<int>> (2, vector<int> (2,-1)));
    cout<<helper(v,0,0,0,dp);
}