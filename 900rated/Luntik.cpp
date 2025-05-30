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
    ll n;
    cin>>n;
    ll one=0;
    ll zero=0;
    ll a;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1){
            one++;
        }
        else if(a==0){
            zero++;
        }
    }
    ll ans=pow(2,zero)*one;
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}