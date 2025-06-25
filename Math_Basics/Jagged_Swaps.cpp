#include <iostream>
#include <vector>
#include <queue>
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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int z=n;
        while(z--){
        for(int i=1;i<n-1;i++){
            if(v[i]>v[i+1] && v[i]>v[i-1]){
                int temp=v[i];
                v[i]=v[i+1];
                v[i+1]=temp;
            }
        }
    }
        bool a=true;
        for(int i=1;i<n;i++){
            if(v[i]<=v[i-1]){
                cout<<"No"<<endl;
                a=false;
                break;
            }
        }
        if(a)
        cout<<"Yes"<<endl;
    }
}