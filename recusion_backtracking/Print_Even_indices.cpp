#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

void helper(vector<ll> &v,int index){
    if(index<0){
        return;
    }
    if(index%2==0)
    cout<<v[index];
    if(index!=0 && index%2==0){
        cout<<" ";
    }
    helper(v,index-1);
}

int main(){
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    helper(v,v.size()-1);
}