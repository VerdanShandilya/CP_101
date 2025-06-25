#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

// int main(){
//     int n;
//     cin>>n;
//     vector<ll> dp(n+1);
//     dp[0]=1;
//     for(int i=1;i<=n;i++){
//         dp[i]=i*dp[i-1];
//     }
//     cout<<dp[n];
// }

//fibonacci

int main(){
    int n;
    cin>>n;
    vector<ll> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
}