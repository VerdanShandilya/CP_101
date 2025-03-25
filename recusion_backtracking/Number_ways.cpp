#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

void helper(ll s,ll e,ll &count){
    if(s==e){
        count++;
        return;
    }
    if(s>e){
        return;
    }
    helper(s+1,e,count);
    helper(s+2,e,count);
    helper(s+3,e,count);
}

int main(){
    ll s,e;
    cin>>s>>e;
    ll count=0;
    helper(s,e,count);
    cout<<count<<endl;
}