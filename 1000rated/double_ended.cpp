#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
using ll = long long;
using namespace std;

ll helper(string &s, string &n,ll i,ll j,ll count,vector<vector<vector<ll>>> &dp) {
    if (i>=s.size() || j>=n.size())
     return count;

    if (dp[i][j][count] != -1) return dp[i][j][count];
     ll ans = count;

    if (s[i] == n[j]) {
        ans = max(ans,helper(s, n, i+1, j+1, count+1, dp));
    }

    ll b=helper(s,n,i+1,j,0,dp);
    ll c=helper(s,n,i,j+1,0,dp);

    return dp[i][j][count]=max({ans,b,c});
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s,n;
        cin>>s>>n;
        ll max_count = min(s.size(),n.size()) + 1;
        vector<vector<vector<ll>>> dp(s.size(), vector<vector<ll>>(n.size(), vector<ll>(max_count, -1)));
        ll con=helper(s,n,0,0,0,dp);
        cout<<s.size()-con+(n.size()-con)<<endl;;
    }
}