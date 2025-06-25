#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
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
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll> temp=v;
        sort(temp.begin(),temp.end());
        vector<ll> prefix(n);
        prefix[0]=temp[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+temp[i];
        }
        ll val=0;
        ll l=0;
        ll r=n;
        while(l<=r){
            ll mid=l+(r-l)/2;
            ll sum=prefix[mid];
            for(int i=mid+1;i<n;i++){
                if(sum>=temp[i]){
                    sum+=temp[i];
                }
                else{
                    break;
                }
            }
            if(sum==prefix[n-1]){
                val=temp[mid];
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        ll count=0;
        for(int i=0;i<n;i++){
            if(v[i]>=val){
                count++;
            }
        }
        cout<<count<<endl;
        for(int i=0;i<n;i++){
            if(v[i]>=val){
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
}