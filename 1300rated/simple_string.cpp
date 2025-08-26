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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);           

    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            for(char j='a';j<='z';j++){
                if(s[i-1]!=j && (i+1>= s.size() || j!=s[i+1])){
                    s[i]=j;
                    break;
                }
            }
        }
    }
    cout<<s;
}

int main(){
    helper();
}