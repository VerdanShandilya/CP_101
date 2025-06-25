#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
using ll = long long;
using namespace std;

void helper(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    vector<ll> c(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    vector<pair<ll,ll>> v1;
    for(int i=0;i<n;i++){
        v1.push_back({c[i],v[i]});
    }
    sort(v1.begin(),v1.end());
    ll cost=k;
    ll p=n-1;
    for(auto i : v1){
        if(i.first<k){
            if(p>=i.second){
                cost+=i.second*i.first;
                p=p-i.second;
            }
            else{
                cost+=i.first*p;
                p=0;
            }
        }
        else{
            break;
        }
    }
    if(p!=0){
        cost+=p*k;
    }
    cout<<cost<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}