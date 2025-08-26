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
    char a;
    cin>>n;
    cin>>a;
    string s;
    cin>>s;
    int ans=0;
    bool temp=true;
    for(int i=0;i<n;i++){
        if(s[i]!=a){
            temp=false;
        }
    }
    if(temp){
        cout<<0<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        bool temp=true;
        for(int j=i;j<=n;j+=i){
            if(s[j-1]!=a){
                temp=false;
                break;
            }
        }
        if(temp){
            cout<<1<<endl;
            cout<<i<<endl;
            return;
        }
    }
    cout<<2<<endl;
    cout<<n-1<<" ";
    cout<<n<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}