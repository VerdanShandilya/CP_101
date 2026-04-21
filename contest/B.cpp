#include <bits/stdc++.h>
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
    set<int> s;
    vector<int> ind;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0){
            s.insert(i+1);
            ind.push_back(i);
        }
    }
    int l=0;
    int r=n-1;
    if(ind.size()==1){
        if(s.find(ind[0]+1)!=s.end()){
            v[ind[0]]=ind[0]+1;
        }
    }
    while(l<n && v[l]==l+1){
        l++;
    }
    while(r>=0 && v[r]==r+1){
        r--;
    }
    if(l>=n){
        cout<<0<<endl;
    }
    else{
        cout<<r-l+1<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}