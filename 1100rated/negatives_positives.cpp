#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <climits>
using ll = long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll sum=0;
    ll neg=0;
    bool zero=false;
    for(int i=0;i<n;i++){
        sum+=abs(v[i]);
        if(v[i]<0){
            neg++;
        }
        if(v[i]==0){
            zero=true;
        }
    }
    if(neg==0 || neg%2==0){
        cout<<sum<<endl;
        return;
    }
    else{
        ll mi=INT_MAX;
        for(int i=0;i<n;i++){
            ll num=abs(v[i]);
            mi=min(mi,num);
        }
        cout<<sum-mi-mi<<endl;
    }

}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}