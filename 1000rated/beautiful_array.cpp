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
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    ll minbeauty=k*b;
    if(s<minbeauty){
        cout<<-1<<endl;
        return;
    }
    ll firstval=minbeauty;
    ll remainingval=n*(k-1);
    ll remainingsum=s-firstval;
    if(remainingsum>remainingval){
        cout<<-1<<endl;
        return;
    }
    if(remainingsum>=k-1){
        cout<<firstval+k-1<<" ";
    }
    else{
        cout<<firstval+remainingsum<<" ";
    }
    remainingsum-=(k-1);
    for(int i=1;i<n;i++){
        if(remainingsum>-1){
            if(remainingsum>=k-1){
                cout<<k-1<<" ";
            }
            else{
                cout<<remainingsum<<" ";
            }
            remainingsum-=(k-1);
        }
        else{
            cout<<0<<" ";
        }
    }
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}