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
    if(a==1 && b==1){
        cout<<1+2<<endl;
    }
    else if(b==1 && a==2){
        cout<<2<<endl;
    }
    else if(b==0){
        cout<<a<<endl;
    }
    else{
        cout<<a+1<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}