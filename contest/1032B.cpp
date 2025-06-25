#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using ll = long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> m;
    for(int i=1;i<s.size()-1;i++){
        m[s[i]]++;
    }
    for(auto i : m){
        if(i.second>=2){
            cout<<"YES"<<endl;
            return;
        }
    }
    for(int i=1;i<s.size()-1;i++){
        if(s[i]==s[0] || s[i]==s[s.size()-1]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    ll t;
    cin>>t;
    while (t--){
        helper();
    }
}
