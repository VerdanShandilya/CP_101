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
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>> v(n,vector<ll> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    ll ans=0;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]!=v[n-i-1][n-j-1]){
                ans++;
            }
        }
    }
    if(n%2==1){
        int i =n/2;
        for(int j=0;j<=n/2;j++){
            if(v[i][j]!=v[n-1-i][n-1-j]){
                ans++;
            }
        }
    }
    if(ans>k){
        cout<<"NO"<<endl;
        return;
    }
    ll rem=k-ans;
    if(rem%2==0 || n % 2 == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}