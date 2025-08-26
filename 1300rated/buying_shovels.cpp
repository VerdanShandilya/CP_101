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
    if(n<=k){
        cout<<1<<endl;
        return;
    }
    int ans=1;
    for(int i=2;i<=k && i*i<=n;i++){
        if(n%i==0){
            ans=max(ans,i);
            int temp=n/i;
            if(temp<=k)
            ans=max(ans,temp);
        }
    }
    if(ans==0){
        cout<<n<<endl;
        return;
    }
    cout<<n/ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}