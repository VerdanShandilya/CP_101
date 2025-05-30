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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int even=0;
    int ans=1000;
    if(k==2 || k==3 || k==5){
        for(int i=0;i<n;i++){
            if(v[i]%k==0){
                cout<<0<<endl;
                return;
            }
            else{
                int rem=k-(v[i]%k);
                ans=min(ans,rem);
            }
        }
        cout<<ans<<endl;
        return;
    }
    else{
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                even++;
            }
        }
        cout<<2-even<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}