#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
using ll = long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> m;
    ll ans=0;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    unordered_map<int,int> m1;
    for(int i=0;i<n;i++){
        m[s[i]]--;
        m1[s[i]]++;
        if(m[s[i]]==0){
            m.erase(s[i]);
        }
        ll len=m.size()+m1.size();
        ans=max(ans,len);
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}