#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int helper(vector<int> &v,int y){
    int l=0;
    int r=v.size();
    while(l<r){
        int mid=l+(r-l)/2;
        if(v[mid]<=y){
            l=mid+1;
        }
        else{
            r=mid;
        }
    }
    return l;
}

int main(){
    ll n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int x;
    cin>>x;
    while(x--){
        int y;
        cin>>y;
        cout<<helper(v,y)<<endl;
    }
}