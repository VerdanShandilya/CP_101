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


void seive(ll n,vector<bool> &temp){
    for(int i=2;i*i<=n;i++){
        ll q=1+i;
        
        for(int j=i*i;j<n;j=j*i){
            q += j;
            if (q>n) break;
            temp[q]=true;
        }
    }
}

void helper(vector<bool> &temp){
    ll n;
    cin>>n;
    if(temp[n]==true){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main(){
    int n=1e6;
    vector<bool> temp(n+1,false);
    seive(n,temp);
    ll t;
    cin>>t;
    while(t--)
    helper(temp);
}