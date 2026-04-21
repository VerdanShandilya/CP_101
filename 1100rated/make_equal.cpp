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
    ll n,k;
    cin>>n>>k;
    multiset<int> s;
    multiset<int> s1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s1.insert(a);
    }

    while(!s.empty()){
        auto f=s.begin();
        int ab=abs(*f-k)+k;
        int abb=abs(*f-k);
        if(s1.find(ab)!=s1.end()){
            s.erase(*f);
            s1.erase(ab);
            continue;
        }
        if(s1.find(*f+k)!=s1.end()){
            s.erase(*f);
            s1.erase(*f+k);
            continue;
        }
        if(s1.find(abb)!=s1.end()){
            s.erase(*f);
            s1.erase(abb);
            continue;
        }
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    helper();
}