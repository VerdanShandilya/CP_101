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
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i]; 
    }
    ll temp=0;
    ll sum=0;
    int l=0;
    int r=0;
    while(r<v.size()){
        temp+=v[r];
        if(r-l+1<k){
            r++;
        }
        else if(r-l+1==k){
            sum+=temp;
            temp-=v[l];
            l++;
            r++;
        }
    }
    int s=n-k+1;
    long double ans=(long double)sum/(long double)s;
    cout<<fixed<<setprecision(6)<<ans<<"\n";
}

int main(){
    helper();
}