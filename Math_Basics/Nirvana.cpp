#include <iostream>
#include <vector>
#include <map>
#include <string>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum(string n) {
    ll ans = 1;
    for (char c : n) {
        ans *= (c - '0');
    }
    return ans;
}

int main (){
    ll n;
    cin>>n;
    string num = to_string(n);
    ll ans=0;
    ans=max(ans,sum(num));
    int i=num.size()-1;
    while(i>0){
        ans=max(ans,sum(num));
        num[i]='9';
        while(num[i-1]=='0'){
            num[i-1]='9';
            i--;
        }
        num[i-1]--;
        i--;
    }
    if(num[0]=='0'){
        num[0]='1';
    }
    ans=max(ans,sum(num));
    cout<<ans<<endl;
}