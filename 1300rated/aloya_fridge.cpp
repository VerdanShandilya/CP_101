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
    vector<int> temp;
    for(int i=0;i<n;i++){
        temp.push_back(v[i]);
        alldesc(temp);
        int l=k;
        int r=k;
        bool flag=true;
        for(int j=0;j<temp.size();j++){
            if(l==r){
                l=l-temp[j];
            }
            else{
                r=l;
            }
            if(l<0){
                flag=false;
            }
        }
        if(flag==false){
            cout<<i<<endl;
            return;
        }
    }
    cout<<n<<endl;
}

int main(){
    helper();
}