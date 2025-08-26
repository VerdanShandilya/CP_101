#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void helper(){
    ll a, b, c;
    cin >> a >> b >> c;

    ll nc = a + 2 * (b - a);
    if (nc > 0 && nc % c == 0) {
        cout << "YES\n";
        return;
    }

    if ((c - a) % 2 == 0) {
        ll nb = a + (c - a) / 2;
        if (nb > 0 && nb % b == 0) {
            cout << "YES\n";
            return;
        }
    }

    ll na = b - (c - b);
    if (na > 0 && na % a == 0) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) helper();
}
