#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using ll=long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        ll ma=0;
        ll mi=0;
        mi=(k*(k+1))/2;
        ma=((n*(n+1))/2)-(((n-k)*(n-k+1))/2);
        if(x<=ma && x>=mi){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}