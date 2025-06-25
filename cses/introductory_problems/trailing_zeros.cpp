#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
using ll=long long;
using namespace std;
const int mod=1e9+7;

void helper(){
    ll n;
    cin>>n;
    ll a=5;
    ll ans=0;
    while(a<=n){
        ans+=floor(n/a);
        a=a*5;
    }
    cout<<ans<<endl;
}


int main(){
    helper();
}