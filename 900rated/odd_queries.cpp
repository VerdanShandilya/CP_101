#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
using ll = long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll> prefix(n+1,0);
        for(int i=1;i<=n;i++){
            prefix[i]=v[i-1]+prefix[i-1];
        }
        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
            ll sum=0;
            sum+=k*(r-l+1);
            sum+=prefix[l-1];
            sum+=prefix[n]-prefix[r];
            if(sum%2!=0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}