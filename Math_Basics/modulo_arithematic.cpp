#include <iostream>
using namespace std;
const int MOD=1e9+7;
using ll =long long;

int main(){

    ll n,x;
    cin>>n>>x;
    ll ans=1;
    for(int i=0;i<x;i++){
        ans*=(x%MOD) % MOD;
        ans=ans%MOD;
    }
    cout<<ans;
}

#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;
using ll = long long;


ll mod_pow(ll x, ll n, ll mod) {
    ll result = 1;
    x = x % mod;
    while (n > 0) {
        if (n % 2 == 1)
            result = (result * x) % mod;
        x = (x * x) % mod;
        n /= 2;
    }
    return result;
}

int main() {
    ll n, x;
    cin >> n >> x;
    cout << mod_pow(x,n)<<endl;
}