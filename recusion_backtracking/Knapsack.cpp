#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll helper(vector<pair<int,int>> &v,int index,int w){
    if(index>=v.size()){
        return 0;
    }
    ll ans=0;
    if(w>=v[index].first){
        ans=max(helper(v,index+1,w),v[index].second+helper(v,index+1,w-v[index].first));
    }
    else{
        ans=helper(v,index+1,w);
    }
    return ans;
}

int main(){
    int n,w;
    cin>>n>>w;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    cout<<helper(v,0,w)<<endl;
}