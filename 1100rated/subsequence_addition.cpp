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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll sum=1;
    if(v.size()==1){
        if(v[0]==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(sum<v[i]){
            cout<<"NO"<<endl;
            return;
        }
        sum+=v[i];
    }
    cout<<"YES"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}