#include <iostream>
#include <vector>
#include <map>
#include <string>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,d;
        cin>>n>>d;
        string num;
        cin>>num;
        string ans=num;
        string c=to_string(d);
        int i=0;
        while (i<n && num[i]-'0'>=d) {
            i++;
        }
        string copy=num.substr(0,i)+c+num.substr(i);
        if(copy > ans){
            ans = copy;
        }
        cout<<ans<<endl;
    }
}