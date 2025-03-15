#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll helper(int n){
    if(n<=1){
        return 1;
    }
    ll ans=n*helper(n-1);
    return ans;
}

int main(){
    ll n;
    cin>>n;
    cout<<helper(n);
}