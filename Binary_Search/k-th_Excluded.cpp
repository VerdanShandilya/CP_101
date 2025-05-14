#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> prefix(n);
    prefix[0]=v[0]-1;
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+(v[i]-v[i-1]-1);
    }
    while(q--){
        ll a;
        cin>>a;
        int l=0;
        int r=v.size()-1;
        int ans=v.size();
        while(l<=r){
            int mid=l+(r-l)/2;
            if(prefix[mid]>=a){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        } 
        if(ans==0){
            cout<<a<<endl;
        }
        else if(l==prefix.size()){
            cout<<v[v.size()-1]+(a-prefix[ans-1])<<endl;
        }
        else{
            cout<<v[ans-1]+(a-prefix[ans-1])<<endl;
        }
    }
}