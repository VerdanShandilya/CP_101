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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        if(v[i]==0 && v[i+1]<0){
            v[i+1]=abs(v[i+1]);
        }
        else if(v[i]<0 && v[i]<0){
            v[i]=abs(v[i]);
        }
        else if(v[i]<0 && v[i+1]<0){
            v[i]=abs(v[i]);
            v[i+1]=abs(v[i+1]);
        }
        else if(v[i]<0 && v[i+1]>0){
            if(abs(v[i])>v[i+1]){
                v[i+1]=-1*v[i+1];
                v[i]=abs(v[i]);
            }
        }
        else if(v[i]>0 && v[i+1]<0){
            if(v[i]<abs(v[i+1])){
                v[i]=-1*v[i];
                v[i+1]=abs(v[i+1]);
            }
        }
        else{
            continue;
        }
    }
    ll sum=0;
    for(auto i : v){
        sum+=i;
    }
    cout<<sum<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}