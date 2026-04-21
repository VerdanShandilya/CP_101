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
    if(n<=4){
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<=n;i+=2){
        if(i==5){
            continue;
        }
        cout<<i<<" ";
    }
    cout<<5<<" "<<4<<" "<<2<<" ";
    for(int i=6;i<=n;i+=2){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    helper();
}