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
    ll ans=INT_MIN;
    ll sum=0;
    int l=0;
    int r=0;
    while(r<n){
        if(sum<0){
            sum=0;
            l=r;
        }
        if(l<r){
            if(abs(v[r]%2)!=abs(v[r-1]%2)){
                sum+=v[r];
            }
            else{
                sum=v[r];
                l=r;
            }
        }
        else{
            sum=v[r];

        }
        ans=max(ans,sum);
        r++;
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}