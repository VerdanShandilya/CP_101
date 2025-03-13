#include <iostream>
#include <vector>
#include <unordered_map>

// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll total =n*(n-1);
        unordered_map<int,int> m;
        vector<int> ans;
        vector<int> v;
        for(int i=0;i<total;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++){
            int num1=0;
            int num2=0;
            if(i%n-1==0)
        }
        cout<<endl;
    }
}