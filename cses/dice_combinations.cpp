#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

const int MOD = 1e9 + 7;

ll helper(int n, vector<ll>& dp) {
    if (n == 0)
    return 1;
    if (n < 0)
    return 0;
    if (dp[n] != -1)
    return dp[n];
    ll res = 0;
    for (int i=1;i<=6;i++) {
        res=(res+helper(n-i,dp))%MOD;
    }
    return dp[n] = res;
}

int main() {
    int n;
    cin >> n;
    vector<ll> dp(n+1,-1);
    cout<<helper(n, dp)<<endl;
}