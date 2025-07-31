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


vi max3(vi &a){
    vp temp;
    for(int i=0;i<a.size();i++){
        temp.push_back({a[i],i});
    }
    alldesc(temp);
    vi ans;
    for(int i=0;i<3;i++){
        ans.push_back(temp[i].second);
    }
    return ans;
}

void helper(){
    ll n;
    cin>>n;
    vi c(n),a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    vi ta=max3(a);
    vi tb=max3(b);
    vi tc=max3(c);
    ll ans=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(ta[i]==tb[j] || tb[j]==tc[k] || ta[i]==tc[k]){
                    continue;
                }
                ll temp=a[ta[i]]+b[tb[j]]+c[tc[k]];
                ans=max(ans,temp);
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}