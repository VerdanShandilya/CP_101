#include <iostream>
#include <vector>
#include <map>
#include <string>
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
        vector<pair<int,int>> v;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back({a[i],i+1});
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(v[i].first*v[j].first==v[i].second+v[j].second){
                    ans++;
                }
                else{
                    if(v[i].first*v[j].first>2*n){
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}