#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;
using namespace std;

void helper() {
    ll n, k;
    cin>>n>>k;
    vector<ll> v(n);
    for (ll i=0;i<n;i++){
        cin>>v[i];
    }

    ll less=max(0LL,k-v[0]);                 
    ll greater=max(0LL,v[n-1]-k);            

    if (less == 0) {
        cout<<greater<<endl;
        return;
    }
    if (greater==0){
        cout << less << endl;
        return;
    }

    ll ans=2*min(less,greater)+max(less,greater);
    cout<<ans<<endl;
}

int main() {
    ll t;
    cin>>t;
    while (t--){
        helper();
    }
}
