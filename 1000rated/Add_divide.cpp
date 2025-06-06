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
    ll a,b;
    cin>>a>>b;
    ll cnt=0;
    if(b==1){
        b++;
        cnt++;
    }
    ll copy=a;
    for(int i=0;i<n;)
    while(a!=0){
        if(a==b){
            cnt+=2;
            a=0;
        }
        else{
            a=floor(a/b);
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}