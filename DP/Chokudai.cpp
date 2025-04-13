#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;
int const mod=1e9+7;

// ll helper(string &s,string &test,int indexs,int indext,vector<vector<int>> &dp){
//     if(indext>=test.size()){
//         return 1;
//     }
//     if(indexs>=s.size()){
//         return 0;
//     }
//     if(dp[indexs][indext]!=-1){
//         return dp[indexs][indext];
//     }
//     int a=0;
//     if(s[indexs]==test[indext]){
//         a=helper(s,test,indexs+1,indext+1,dp);  
//     }
//     int b = helper(s,test,indexs+1,indext,dp);
//     return dp[indexs][indext]=((a+b)%mod);
// }

int main(){
    string s;
    cin>>s;
    string test="chokudai";
    vector<vector<int>> dp(s.size(), vector<int> (test.size(),0));
    // cout<<helper(s,test,0,0,dp)%mod;
    for(int i=0;i<dp.size();i++){
        
    }
    for(int i=0;i<s.size();i++){
        for(int j=0;j<test.size();j++){
            if(s[i]==test[j]){
                dp[i][j]=
            }
        }
    }
}