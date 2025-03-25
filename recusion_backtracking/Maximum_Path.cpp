#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll ans=INT_MIN;
void helper(vector<vector<int>> &v,int i,int j,ll cans){
    if (i>=v.size() || j>=v[0].size()){
        return ;
    }
    if (i==v.size()-1 && j==v[0].size()-1){
        if(cans>ans){
            ans=cans;
        }
        return;
    }
    if(i+1<v.size())
    helper(v,i+1,j,cans+v[i+1][j]);
    if(j+1<v[0].size())
    helper(v,i,j+1,cans+v[i][j+1]);

}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            v[i][j]=a;
        }
    }
    helper(v,0,0,v[0][0]);
    cout<<ans<<endl;
}