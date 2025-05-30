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
    ll ans=0;
    int i=s.size()-1;
    while(i>=0 && s[i]!='0'){
        ans++;
        i--;
    }
    i--;
    while(i>=0 && s[i]!='5' && s[i]!='0'){
        ans++;
        i--;
    }
    ll count=0;
    i=s.size()-1;
    while(i>=0 && s[i]!='5'){
        count++;
        i--;
    }
    i--;
    while(i>=0 && s[i]!='2' && s[i]!='7'){
        count++;
        i--;
    }
    cout<<min(count,ans)<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}

// 1050057