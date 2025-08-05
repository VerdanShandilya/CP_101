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

void helper() {
    ll n,k,x;
    cin>>n>>k>>x;

    vll v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    allasc(v);
    vll gaps;
    for(int i=1;i<n;i++){
        ll diff=v[i]-v[i-1];
        if(diff>x){
            gaps.push_back(diff);
        }
    }
    allasc(gaps);
    ll groups=gaps.size()+1;
    for(int i=0;i<gaps.size();i++){
        ll req=(gaps[i]-1)/x;
        if(k>=req){
            k=k-req;
            groups--;
        }
        else{
            break;
        }
    }
    cout<<groups<<endl;
}

int main() {
    helper();
    return 0;
}

