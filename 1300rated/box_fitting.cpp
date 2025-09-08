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
    ll n,w;
    cin>>n>>w;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    alldesc(v);
    multiset<int> s;
    for(int i=0;i<v.size();i++){
        int temp=v[i];
        auto it= s.lower_bound(temp);
        if(it==s.end()){
            s.insert(w-temp);
            continue;
        }
        s.erase(it);
        int c=*it-temp;
        s.insert(c);
    }
    cout<<s.size()<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}