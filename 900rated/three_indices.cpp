#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
using ll = long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool left=false;
    bool right=false;
    int l=0;
    int r=0;
    for(int i = 1;i<n-1;i++){
        for(int j=i-1;j>=0;j--){
            if(v[i]>v[j]){
                l=j;
                left=true;
                break;
            }
        }
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                r=j;
                right=true;
                break;
            }
        }
        if(left && right){
            cout<<"YES"<<endl;
            cout<<l+1<<" "<<i+1<<" "<<r+1<<endl;
            return;
        }
        left=false;
        right=false;
    }
    cout<<"NO"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}