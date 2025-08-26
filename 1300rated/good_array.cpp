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
    unordered_map<int,vector<int>> m;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        
    }
    for(int i=0;i<n;i++){
        m[v[i]].push_back(i+1);
    }
    ll sum=accumulate(all(v),0LL);
    vector<int> ans;
    ll res=0;
    set<int> s;
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(s.count(v[i])){
            continue;
        }
        else{
            s.insert(v[i]);
            temp.push_back(v[i]);
        }
    }
    allasc(temp);
    for(int i=temp.size()-1;i>=0;i--){
        ll rem=sum-temp[i];
        ll req=rem-temp[i];
        if(m.find(req)!=m.end()){
            if(m[req].size()==1 && req==temp[i]){
                continue;
            }
            for(int j=0;j<m[req].size();j++){
                ans.push_back(m[req][j]);
                res++;
            }
        }
    }
    cout<<res<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}

int main(){
    helper();
}