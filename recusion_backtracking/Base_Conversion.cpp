#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

void helper(int n){
    if(n==0){
        return;
    }
    helper(n/2);
    cout<<n%2;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        helper(n);
        cout<<endl;
    }
}