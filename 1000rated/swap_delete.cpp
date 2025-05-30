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
    if(ones>zeros){
        cout<<ones-zeros<<endl;
    }
    else if(ones<zeros){
        cout<<zeros-ones<<endl;
    }
    else{
        cout<<0<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}