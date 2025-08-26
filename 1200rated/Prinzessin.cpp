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
    unordered_set<string> m;
    for(int i=0;i<s.size();i++){
        string temp="";
        temp+=s[i];
        m.insert(temp);
    }
    if(s.size()>=2){
        for(int i=0;i<s.size()-1;i++){
            string temp = "";
            temp += s[i];
            temp+=s[i+1];
            m.insert(temp);
        }
    }
    if(s.size()>=3){
        for(int i=0;i<s.size()-2;i++){
            string temp = "";
            temp += s[i];
            temp+=s[i+1];
            temp+=s[i+2];
            m.insert(temp);
        }
    }
    for(char i='a';i<='z';i++){
        string temp="";
        temp+=i;
        if(m.find(temp)==m.end()){
            cout<<i<<endl;
            return;
        }
    }
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            string temp="";
            temp+=i;
            temp+=j;
            if(m.find(temp)==m.end()){
                cout<<temp<<endl;
                return;
            }
        }
    }
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            for(char k='a';k<='z';k++){
                string temp="";
                temp+=i;
                temp+=j;
                temp+=k;
                if(m.find(temp)==m.end()){
                    cout<<temp<<endl;
                    return;
                }
            }
        }
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}