#include <iostream>
#include <unordered_map>
using namespace std;
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;

    unordered_map<ll,ll> nn;
    unordered_map<ll,ll> mm;
    for (int i=1;i<=n;i++){
        nn[i%5]++;
    }
    for (int i=1;i<=m;i++){
        mm[i%5]++;
    }
    ll ans=0;
    for (int i=0;i<5;i++){
        if(i==0){
            ans+=(nn[0]*mm[0]);
        }
        else{
            ans+=(nn[i]*mm[5-i]);
        }
    }
    cout<<ans<<endl;
}
