#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using ll=long long;
using namespace std;
const int mod=1e9+7;

void helper(){
    ll n;
    cin>>n;
    ll ans=1;
    for(int i=0;i<n;i++){
        ans=((ans%mod)*2)%mod;
    }
    cout<<ans%mod;
}


int main(){
    helper();
}