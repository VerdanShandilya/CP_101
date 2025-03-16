#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

void helper(vector<vector<int>> &a,vector<vector<int>> &b,vector<vector<int>> &ans,int i,int j){
    if(i>a.size()-1 || j>a[0].size()-1 || ans[i][j]!=-1){
        return;
    }
    ans[i][j]=a[i][j]+b[i][j];
    helper(a,b,ans,i+1,j);
    helper(a,b,ans,i,j+1);
}

int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> a(r,vector<int>(c));
    vector<vector<int>> b(r,vector<int>(c));
    vector<vector<int>> ans(r,vector<int>(c,-1));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    helper(a,b,ans,0,0);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}