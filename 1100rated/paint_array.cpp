#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <numeric>
using ll = long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    vector<ll> even;
    vector<ll> odd;
    for(int i=0;i<n;i++){
        ll z;
        cin>>z;
        if(i%2==0){
            even.push_back(z);
        }
        else{
            odd.push_back(z);
        }
    }
    ll evenmin= even[0];
    for (int i=0;i<even.size(); i++)
        evenmin = __gcd(evenmin,even[i]);

    ll oddmin= odd[0];
    for (int i=0;i<odd.size();i++)
        oddmin =__gcd(oddmin,odd[i]);

    bool check=true;
    for(int i=0;i<odd.size();i++){
        if(odd[i]%oddmin!=0){
            check=false;
            break;
        }
    }
     for(int i=0;i<even.size();i++){
        if(even[i]%oddmin==0){
            check=false;
            break;
        }
    }
    if(check){
        cout<<oddmin<<endl;
        return;
    }
    check=true;
    for(int i=0;i<odd.size();i++){
        if(odd[i]%evenmin==0){
            check=false;
            break;
        }
    }
     for(int i=0;i<even.size();i++){
        if(even[i]%evenmin!=0){
            check=false;
            break;
        }
    }
    if(check){
        cout<<evenmin<<endl;
        return;
    }
    cout<<0<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}