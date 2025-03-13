#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

void helper(int n){
    if(n==0) return;
    cout<<"I love Recursion"<<endl;
    helper(n-1);
}

int main(){
    int n;
    cin>>n;
    helper(n);
}