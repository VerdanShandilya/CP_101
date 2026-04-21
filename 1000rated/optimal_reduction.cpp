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
    int pivot=*max_element(all(v));
    int ind=0;
    for(int i=0;i<n;i++){
        if(v[i]==pivot){
            ind=i;
            break;
        }
    }
    int mi=v[ind];
    for(int i=ind;i>0;i--){
        if(v[i-1]>mi){
            cout<<"NO"<<endl;
            return;
        }
        else{
            mi=v[i-1];
        }
    }
    mi=v[ind];
    for(int i=ind;i<n-1;i++){
        if(v[i+1]>mi){
            cout<<"NO"<<endl;
            return;
        }
        else{
            mi=v[i+1];
        }
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