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
    vector<vector<ll>> v(2,vector<ll> (n,0));
    v[0][0]=(ll)2*n;
    ll mi=1;
    ll ma=(ll)((2*n)-2);
    bool flag=false;
    bool inflag=false;
    for(int i=0;i<n-1;i++){
        if(!flag){
            if(!inflag){
                v[0][i+1]=mi;
                mi++;
                v[1][i]=mi;
                mi++;
            }
            else{
                v[1][i]=mi;
                mi++;
                v[0][i+1]=mi;
                mi++;
            }
            inflag=!inflag;
        }
        else{
            if(!inflag){
                v[1][i]=ma;
                ma--;
                v[0][i+1]=ma;
                ma--;
            }
            else{
                v[0][i+1]=ma;
                ma--;
                v[1][i]=ma;
                ma--;
            }
        }
        flag=!flag;
    }
    v[1][n-1]=(ll)((2*n)-1);
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    helper();
}