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
    int firstnum=v[0];
    int secondnum=-1;
    int index=0;
    for(int i=0;i<n;i++){
        if(v[i]!=firstnum){
            secondnum=v[i];
            index=i;
            break;
        }
    }
    if(secondnum==-1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        if(v[i]!=firstnum){
            cout<<1<<" "<<i+1<<endl;
        }
    }
    for(int i=1;i<n;i++){
        if(v[i]==firstnum){
            cout<<index+1<<" "<<i+1<<endl;
        }
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}