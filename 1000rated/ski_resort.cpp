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
    ll n,k,q;
    cin>>n>>k>>q;
    vector<bool> v(n);
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x<=q){
            v[i]=true;
        }
        else{
            v[i]=false;
        }
    }
    ll ans=0;
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==true){
            cnt++;
        }
        else{
            if(cnt>=k){
                ll diff=cnt-k+1;
                ans+=diff*(diff+1)/2;
            }
            cnt=0;
        }
    }
    if(cnt>=k){
        ll diff=cnt-k+1;
        ans+=diff*(diff+1)/2;
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