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
    int o=1;
    int c=0;
    s[0]='(';
    for(int i=1;i<n-1;i++){
    if(s[i]==')'){
        c++;
    }else if(s[i] =='('){
        o++;
    }else{
            if(o==c){
                o++;
                s[i]='(';
            }
            else if(o>c){
                c++;
                s[i]=')';
            }
        }
    }
    queue<int> q;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            q.push(i);
        }
        else{
            ans+=(i-q.front());
            q.pop();
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    helper();
}