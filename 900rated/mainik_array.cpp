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
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int minnum=v[0];
    int minind=0;
    for(int i=0;i<n;i++){
        if(v[i]<=minnum){
            minnum=v[i];
            minind=i;
        }
    }
    int maxnum=v[0];
    int maxind=0;
    for(int i=0;i<n;i++){
        if(v[i]>maxnum){
            maxnum=v[i];
            maxind=i;
        }
    }
    if(maxind==minind){
        cout<<0<<endl;
        return;
    }
    if(maxind<minind){
        cout<<maxnum-minnum<<endl;
    }
    else{
        cout<<max(maxnum-v[0],v[n-1]-minnum)<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}