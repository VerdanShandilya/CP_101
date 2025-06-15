#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <climits>
#include <set>
using ll = long long;
using namespace std;

void helper(){
    string s;
    cin>>s;
    set<char> se;
    int k;
    for(k=0;k<s.size();k++){
        if(se.find(s[k])==se.end())
            se.insert(s[k]);
        else
            break;
    }
    bool ans=true;
    for(int i=k;i<s.size();i++){
        if(s[i]!=s[i-k]){
            ans=false;
            break;
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}