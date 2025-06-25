#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int helper(vector<int> &v,int index){
    if(index>=v.size()){
        return INT_MIN;
    }
    int ans=max(v[index],helper(v,index+1));
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<helper(v,0);
}