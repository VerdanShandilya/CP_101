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
    for(auto &i : v) cin>>i;
    vb a(n+1);
    vll ans;
    set<int> s;
    int m=INT_MAX;
    for(int i=0;i<v.size();i++){
        a[v[i]]=true;
    }
    queue<int> q;
    for(int i=1;i<a.size();i++){
        if(!a[i]){
            q.push(i);
        }
    }
    for(int i=0;i<v.size();i++){
        if(s.find(v[i])!=s.end()){
            ans.push_back(q.front());
            q.pop();
        }
        else{
            ans.push_back(v[i]);
            s.insert(v[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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