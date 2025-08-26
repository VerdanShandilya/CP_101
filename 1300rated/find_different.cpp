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
    ll m;
    cin>>m;
    vector<int> nextdiff(n,INT_MAX);
    nextdiff[n-1]=INT_MAX;
    stack<int> s;
    s.push(INT_MAX);
    for(int i=n-1;i>=0;i--){
        if(s.size()==1){
            s.push(i);
            continue;
        }
        while(s.size()>1 && v[s.top()]==v[i]){
            s.pop();
        }
        nextdiff[i]=s.top();
        s.push(i);
    }
    while(m--){
        int l,r;
        cin>>l>>r;
        l=l-1;
        r=r-1;
        int val=nextdiff[l];
        if(val<=r){
            cout<<l+1<<" "<<val+1<<endl;
            continue;
        }
        cout<<-1<<" "<<-1<<endl;
    }
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}