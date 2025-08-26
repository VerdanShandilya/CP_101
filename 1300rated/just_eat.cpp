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
    ll sum=accumulate(all(v),0LL);
    ll res=INT_MIN;
    ll temp=0;
    for(int i=0;i<v.size()-1;i++){
        if(temp<=0){
            temp=0;
        }
        temp+=v[i];
        res=max(temp,res);
    }
    temp=0;
    for(int i=1;i<v.size();i++){
        if(temp<=0){
            temp=0;
        }
        temp+=v[i];
        res=max(temp,res);
    }
    if(res>=sum){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}