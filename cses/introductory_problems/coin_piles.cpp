#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using ll=long long;
using namespace std;

void helper(){
    ll a,b;
    cin>>a>>b;
    ll sum=a+b;
    if(sum%3!=0){
        cout<<"NO"<<endl;
        return;
    }
    else{
        ll m=max(a,b);
        ll mi=min(a,b);
        if(m/2>mi){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}


int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}