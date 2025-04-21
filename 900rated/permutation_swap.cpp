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
        ll n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=__gcd(ans,abs(v[i]-(i+1)));
        }
        cout<<ans<<endl;
    }
}