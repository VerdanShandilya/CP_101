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
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll m=*min_element(v.begin(),v.end());
        int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==m){
                count++;
            }
        }
        if(count>=2){
            cout<<"Yes"<<endl;
            continue;
        }
        int ocount=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=m && v[i]%m==0){
                ocount++;
            }
        }
        if(ocount>=2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}