#include <iostream>
#include <vector>
#include <algorithm>
using ll =long long;
using namespace std;

int res(vector<int> &red,vector<int> &gre,vector<int> &blue,int i,int j,int k,vector<vector<vector<int>>> &dp){
    if((i==red.size() && j==gre.size()) || (k==blue.size() && i==red.size()) || (k==blue.size() && j==gre.size()))
    return 0;

    int a=0;
    int b=0;
    int c=0;
    if(dp[i][j][k]!=-1){
        return dp[i][j][k];
    }
    if(k<blue.size() && j<gre.size()){
        a=blue[k]*gre[j]+res(red,gre,blue,i,j+1,k+1,dp);
    }
    if(i<red.size() && k<blue.size()){
        b=red[i]*blue[k]+res(red,gre,blue,i+1,j,k+1,dp);
    }
    if(j<gre.size() && i<red.size()){
        c=gre[j]*red[i]+res(red,gre,blue,i+1,j+1,k,dp);
    }
    return dp[i][j][k]=max({a,b,c});
}

void helper(){
    ll r,g,b;
    cin>>r>>g>>b;
    vector<int> red(r);
    vector<int> gre(g);
    vector<int> blue(b);
    for(int i=0;i<r;i++){
        cin>>red[i];
    }
    for(int i=0;i<g;i++){
        cin>>gre[i];
    }
    for(int i=0;i<b;i++){
        cin>>blue[i];
    }
    sort(red.begin(),red.end(), greater<int>());
    sort(gre.begin(),gre.end(), greater<int>());
    sort(blue.begin(),blue.end(), greater<int>());
    vector<vector<vector<int>>> dp(r+1, vector<vector<int>> (g+1, vector<int> (b+1,-1)));
    cout<<res(red,gre,blue,0,0,0,dp);
}

int main(){
    helper();
}