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
    string v;
    cin>>v;
    ll l=0;
    ll r=0;
    ll ans=1e9;
    ll cnt=0;
    while(r<v.size()){
        if(v[r]=='B'){
            cnt++;
        }
        if(r-l+1<k){
            r++;
        }
        else{
            ans=min(ans,k-cnt);
            if(v[l]=='B'){
                cnt--;
            }
            l++;
            r++;
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