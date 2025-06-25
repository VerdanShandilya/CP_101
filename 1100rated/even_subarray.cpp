#include <iostream>
#include <vector>
using ll = long long;
using namespace std;


void helper() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll i=n-1;
    while(i>=0 && v[i]==v[n-1]){
        i--;
    }
    if(i==-1){
        cout<<0<<endl;
        return;
    }
    ll ans=0;
    while(i>=0){
        i=i-(n-1-i);
        ans++;
        while(i>=0 && v[i]==v[n-1]){
            i--;
        }
    }
    cout<<ans<<endl;
}

int main() {
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}
