#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using ll = long long;
using namespace std;


bool isprime(ll n){
    if(n<=1){
        return false;
    }
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll diff=x-y;
        if(diff==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}