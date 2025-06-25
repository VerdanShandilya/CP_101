#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
using ll = long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        ll x;
        ll y;
        cin>>x>>y;
        a[i]=(x);
        b[i]=(y);
    }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll ans=0;
        ll l=0;
        ll r=0;
        ll sum=0;
        while(l<n){
            if(a[l]<b[r]){
                sum++;
                l++;
            }
            else if(b[r]>a[l]){
                sum--;
                r++;
            }
            else{
                l++;
                r++;
                continue;
            }
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    
}

int main(){
    helper();
}