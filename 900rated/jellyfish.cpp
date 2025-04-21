#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using ll=long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=0;
        ll l=0;
        while(l<n){
            ans+=(b-1);
            b=v[l]+1;
            b=min(b,a);
            l++;
        }
        ans+=b;
        cout<<ans<<endl;
    }
}