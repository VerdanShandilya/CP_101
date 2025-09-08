#include <bits/stdc++.h>
#include <algorithm>
using ll = long long;
using namespace std;
#define allasc(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define alldesc(v) sort(v.rbegin(), v.rend())
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vp vector<pair<int,int>>
const int mod=1e9+7;


int helper(int n,set<pair<int,int>> &s,int i,int j,int dir,vector<vector<vector<int>>> &dp){
    if(n==0){
        if(s.find({i,j})==s.end()){
            s.insert({i,j});
            return 1;
        }
        return 0;
    }
    if(dp[i][j][dir+1]!=-1){
        return dp[i][j][dir+1];
    }
    int a=0,b=0,c=0,d=0;
    if(dir==-1){
        a=helper(n-1,s,i+1,j,0,dp);
        b=helper(n-1,s,i-1,j,0,dp);
        c=helper(n-1,s,i,j+1,1,dp);
        d=helper(n-1,s,i,j-1,1,dp);
    }
    if(dir==0){
        a=helper(n-1,s,i,j+1,1,dp);
        b=helper(n-1,s,i,j-1,1,dp);
    }
    if(dir==1){
        a=helper(n-1,s,i+1,j,0,dp);
        b=helper(n-1,s,i-1,j,0,dp);
    }
    return dp[i][j][dir+1]=a+b+c+d;
}

int main(){
    ll n;
    cin>>n;
    set<pair<int,int>> s;
    vector<vector<vector<int>>> dp(2*n+1,vector<vector<int>> (2*n+1, vector<int> (3,-1)));
    cout<<helper(n,s,0,0,-1,dp);
}