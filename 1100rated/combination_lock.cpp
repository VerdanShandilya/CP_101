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
    if(n%2==0){
        cout<<-1<<endl;
        return;
    }
    else{
        for(int i=n;i>0;i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}

