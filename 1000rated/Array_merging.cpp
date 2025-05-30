#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
using ll = long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> v1(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    unordered_map<int,int> m;    
    unordered_map<int,int> m1;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(v[i-1]==v[i]){
            cnt++;
        }
        else{
            if(m.find(v[i-1])!=m.end()){
                if( m[v[i-1]]<cnt)
                m[v[i-1]]=cnt;
            }
            else{
                m[v[i-1]]=cnt;
            }
            cnt=1;
        }
    }
    if(m.find(v[n-1])!=m.end()){
        if( m[v[n-1]]<cnt)
        m[v[n-1]]=cnt;
    }
    else
    m[v[n-1]]=cnt;
    cnt=1;
    for(int i=1;i<n;i++){
        if(v1[i-1]==v1[i]){
            cnt++;
        }
        else{
            if(m1.find(v1[i-1])!=m1.end()){
                if(m1[v1[i-1]]<cnt)
                m1[v1[i-1]]=cnt;
            }
            else{
                m1[v1[i-1]]=cnt;
            }
            cnt=1;
        }
    }
    if(m1.find(v1[n-1])!=m1.end()){
        if(m1[v1[n-1]]<cnt)
        m1[v1[n-1]]=cnt;
    }
    else
    m1[v1[n-1]]=cnt;

    int ans=0;
    for(auto i : m){
        if(m1.find(i.first)!=m1.end()){
            ans=max(ans,i.second+m1[i.first]);
        }
        else{
            ans=max(ans,i.second);
        }
    }
    for(auto i : m1){
        if(m.find(i.first)!=m.end()){
            ans=max(ans,i.second+m[i.first]);
        }
        else{
            ans=max(ans,i.second);
        }
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}