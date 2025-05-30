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
    string s;
    cin>>s;
    ll zero=0;
    ll one=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            zero++;
        }
        else{
            one++;
        }
    }
    ll ans=min(zero,one);
    if(ans%2!=0){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}