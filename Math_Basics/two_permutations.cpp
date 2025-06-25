#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
using ll = long long;
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        if(n==a && n==b){
            cout<<"YES"<<endl;
            continue;
        }
        ll diff=n-(a+b);
        if(diff>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}