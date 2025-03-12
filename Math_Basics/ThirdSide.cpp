#include <iostream>
#include <vector>
#include <unordered_map>
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
        vector<ll> ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        sort(ans.begin(),ans.end(),greater<int>());
        while(ans.size()>1){
            int temp1=ans[ans.size()-1];
            int temp2=ans[ans.size()-2];
            ans.pop_back();
            ans.pop_back();
            ans.push_back(temp1+temp2-1);
        }
        cout<<ans[0]<<endl;
    }
}