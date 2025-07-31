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
    multiset<int> s;
    ll n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    allasc(v);

    
    for(auto i : v){
        auto it=s.find(i-1);
        if(it!=s.end()){
            s.erase(it);
        }
        s.insert(i);
    }
    cout<<s.size()<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}

