#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int helper(int n,int r){
    if (r==0||r==n){
        return 1;
    }
    return helper(n-1,r-1)+helper(n-1,r);
}

int main(){
    int n,r;
    cin>>n>>r;
    if(r>n){
        cout<<0<<endl;
    }
    else{
        cout<<helper(n,r)<<endl;
    }
}