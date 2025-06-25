#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>

// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int num=ceil((n*1.0)/2);
        int num2=num^n;
        if(num+num2>n && num+n>num2 && num2+n>num){
            cout<<num<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}