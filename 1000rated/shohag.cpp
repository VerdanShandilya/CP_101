#include <bits/stdc++.h>
#include <algorithm>
using ll = long long;
using namespace std;
#define allasc(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define alldesc(v) sort(v.rbegin(), v.rend())
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vp vector<pair<int,int>>
const int mod=1e9+7;


void helper(){
    string s;
    cin>>s;
    if(s.size()<2){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            cout<<s.substr(i,2)<<endl;
            return;
        }
    }
    for(int i=0;i<s.size()-2;i++){
        if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2]){
            cout<<s.substr(i,3)<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    helper();
}