#include <bits/stdc++.h>
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
    ll n,m;
    cin>>n>>m;
    vi v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    vi gaps;
    allasc(v);
    for(int i=1;i<v.size();i++){
        gaps.push_back(v[i]-v[i-1]-1);
    }
    ll temp = v[0]-1+(n-v[v.size()-1]);
    gaps.push_back(temp);
    alldesc(gaps);
    int inf=0;
    int safe=0;
    for(int i=0;i<gaps.size();i++){
        ll z=gaps[i];
        if(z<=0){
            break;
        }
        if(z==1){
            cout<<n-(safe+1)<<endl;
            return;
        }
        else{
            inf+=4;
            if(i+1<v.size())
            gaps[i+1]=gaps[i+1]-inf;
            safe+=gaps[i]-1;
        }
    }
    cout<<n-safe<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}

