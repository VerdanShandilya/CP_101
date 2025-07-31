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
#include <algorithm>
using ll = long long;
using namespace std;

bool palin(string s,char rem){
    int l=0;
    int r=s.size()-1;
    while(l<=r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else{
            return false;
        }
    }
    return true;
}

int check(string s,char rem){
    int l=0;
    int r=s.size()-1;
    int cnt = 0;
    while(l<=r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else if(s[l]==rem){
            cnt++;
            l++;
        }
        else if(s[r]==rem){
            cnt++;
            r--;
        }
        else{
            return INT_MAX;
        }
    }
    return cnt;
}

void helper(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(palin(s,'a')){
        cout<<0<<endl;
        return;
    }
    else{
        unordered_map<char,int> m;
        for(auto i : s){
            m[i]++;
        }
        int ans=INT_MAX;
        for(auto i : m){
            ans=min(ans,check(s,i.first));
        }
        if(ans==INT_MAX){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }

}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}