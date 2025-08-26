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
    vi v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    reverse(all(v));
    reverse(all(v1));
    unordered_set<int> s;
    int l=0;
    int r=0;
    int ans=0;
    while(l<v.size()){
        if(v[l]==v1[r]){
            l++;
            r++;
        }
        else{
            if(s.find(v1[r])!=s.end()){
                r++;
                continue;
            }
            else{
                s.insert(v[l]);
                l++;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    helper();
}