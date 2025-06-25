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
    helper(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    helper(n);
}