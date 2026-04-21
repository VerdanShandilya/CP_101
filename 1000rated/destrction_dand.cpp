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
    vi even;
    vi odd;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0) even.push_back(v[i]);
        else odd.push_back(v[i]);
    }

    if(odd.size()>0){
        ans+=accumulate(all(even),0LL);
    }
    else{
        cout<<0<<endl;
        return;
    }
    allasc(odd);
    int l=0;
    int r=odd.size()-2;
    ans+=odd[odd.size()-1];
    while(l<r){
        l++;
        ans+=odd[r];
        r--;
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    helper();
}