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
    ll n,r,b;
    cin>>n>>r>>b;
    ll max=r/(b+1);
    ll rem=r-(max*(b+1));
    for(int i=0;i<rem;i++){
        for(int j=0;j<=max;j++){
            cout<<"R";
        }
        cout<<"B";
    }
    for(int i=rem;i<b;i++){
        for(int j=0;j<max;j++){
            cout<<"R";
        }
        cout<<"B";
    }
    for(int i=0;i<max;i++){
        cout<<"R";
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