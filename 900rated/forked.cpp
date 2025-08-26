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
    ll x,y;
    cin>>x>>y;
    vector<pair<int,int>> v;
    v.push_back({x,y}); v.push_back({y,x});
    v.push_back({-1*x,-1*y}); v.push_back({-1*y,-1*x});
    v.push_back({x,-1*y}); v.push_back({-1*x,y});
    v.push_back({-1*y,x}); v.push_back({y,-1*x});

    set<pair<int,int>> s;
    set<pair<int,int>> s1;
    int x1,y1;
    cin>>x1>>y1;
    int x2,y2;
    cin>>x2>>y2;
    for(int i=0;i<v.size();i++){
        s.insert({x1+v[i].first,y1+v[i].second});
    }
    for(int i=0;i<v.size();i++){
        s1.insert({x2+v[i].first,y2+v[i].second});
    }
    int ans=0;
    for(auto i : s){
        if(s1.find(i)!=s1.end()){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}