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
    ll ones=0;
    ll zeros=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            zeros++;
        }
        else{
            ones++;
        }
    }
    if(ones==zeros){
        cout<<0<<endl;
        return;
    }
    else if(ones==0 || zeros==0){
        cout<<s.size()<<endl;
        return;
    }
    ll ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0' && ones>0){
            ans++;
            ones--;
        }
        else if(s[i]=='1' && zeros>0){
            ans++;
            zeros--;
        }
        else{
            cout<<s.size()-ans<<endl;
            return;
        }
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}