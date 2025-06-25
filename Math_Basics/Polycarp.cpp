#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int ans=0;
        string s;
        cin>>s;
        string pi="314159265358979323846264338327";
        for(int i=0;i<s.size();i++){
            if(s[i]==pi[i]) ans++;
            else break;
        }
        cout<<ans<<endl;
    }
}