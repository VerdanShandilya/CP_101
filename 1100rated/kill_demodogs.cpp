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

const int MOD = 1e9 + 7;

void helper() {
    ll n;
    cin>>n;

    ll term1=337%MOD;
    ll term2=n%MOD;
    ll term3=(n+1)%MOD;
    ll term4=((4*(n%MOD))%MOD-1+MOD)%MOD;

    ll ans=(((term1*term2)%MOD*term3)%MOD*term4)%MOD;

    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--)
        helper();
}
