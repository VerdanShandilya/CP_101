#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int helper(vector<int> &v,int x){
    int l=0;
    int r=v.size();
    while(l<r){
        int mid=l+(r-l)/2;
        if(v[mid]<x){
            l=mid+1;
        }
        else{
            r=mid;
        }
    }
    return v.size()-l;
}
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while(q--){
        int x;
        cin>>x;
        cout<<helper(v,x)<<endl; 
    }
}