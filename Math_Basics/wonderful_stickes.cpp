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
    string s;
    cin>>s;
    int r=n;
    int l=1;
    vi ans;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='>'){
            ans.push_back(r);
            r--;
        }
        else{
            ans.push_back(l);
            l++;
        }
    }
    ans.push_back(r);
    reverse(ans.begin(),ans.end());

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}