#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int sum=0;
        for(int i=0;i<n-1;i++){
            int x;
            cin>>x;
            sum+=x;
        }
        if(sum>0){
            cout<<sum-2*sum<<endl;
        }
        else{
            cout<<abs(sum)<<endl;
        }
    }
}