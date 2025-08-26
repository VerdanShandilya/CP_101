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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string t;
    cin>>t;
    vp v;   //pair<count_zero,count_one>
    int zero=0;
    int one=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            zero++;
        }
        else{
            one++;
        }
        v.push_back({zero,one});
    }
    int i=n-1;
    bool flag=s[n-1]==t[n-1];
    while(s[i]==t[i]){
        i--;
        flag=s[i]==t[i];
    }
    while(i>=0){
        if(v[i].first==v[i].second){
            if(flag){
                while(i>=0 && s[i]==t[i]){
                    i--;
                }
                flag=false;
                continue;
            }
            else{
                while(i>=0 && s[i]!=t[i]){
                    i--;
                }
                flag=true;
                continue;
            }
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}