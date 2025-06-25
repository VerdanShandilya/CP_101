#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll helper(ll n){
    if(n==1){
        return 1;
    }
    ll ans=0;
    if(n%2==0){
        ans=1+helper(n/2);
    }
    else{
        ans=1+helper((3*n)+1);
    }
    return ans;

}

int main(){
    ll n;
    cin>>n;
    cout<<helper(n);
}