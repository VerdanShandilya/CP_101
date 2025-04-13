#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using ll = long long;
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=LLONG_MAX;
    for(int i=0;i<n;i++){
        ans=min(ans,abs(v[i]));
    }
    cout<<ans<<endl;
}