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
    ll n,m;
    cin>>n>>m;
    bool zero=false;
    vector<vector<int>> v(n,vector<int> (m));
    ll sum=0;
    ll mi=10000;
    ll nev=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]==0){
                zero=true;
            }
            sum+=abs(v[i][j]);
            ll val=v[i][j];
            mi=min(mi,abs(val));
            if(v[i][j]<0){
                nev++;
            }
        }
    }
    if(zero || nev%2==0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum-2*mi<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}