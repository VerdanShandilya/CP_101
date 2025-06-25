#include <iostream>
#include <vector>
#include <string>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string ans="";
        string s="";
        int count=0;
        for(int i=0;i<n;i++){
            char a;
            cin>>a;
            s+=a;
        }
        if (s[0]=='1')
        count++;
        for(int i=1;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
            if(count%2==0){
                ans+='-';
            }
            else{
                ans+='+';
            }
        }
        cout<<ans<<endl;
    }
}