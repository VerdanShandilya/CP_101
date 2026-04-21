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
    vi freq(101,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    vector<pair<int,int>> temp;
    for(int i=1;i<freq.size();i++){
        if(freq[i]>=2){
            temp.push_back({freq[i],i});
        }
    }
    if(temp.size()<2){
        cout<<-1<<endl;
        return;
    }
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(v[i]==temp[0].second && cnt1==0){
            cout<<1<<" ";
            cnt1++;
        }
        else if(v[i]==temp[0].second && cnt1==1){
            cout<<2<<" ";
            cnt1++;
        }
        else if(v[i]==temp[1].second && cnt2==0){
            cout<<1<<" ";
            cnt2++;
        }
        else if(v[i]==temp[1].second && cnt2==1){
            cout<<3<<" ";
            cnt2++;
        }
        else{
            cout<<1<<" ";
        }
    }
    cout<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    helper();
}