#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> freqWithIdx(n);
    for (ll i = 0; i < n; ++i) {
        ll x;
        cin >> x;
        freqWithIdx[i] = {x, i + 1};
    }
    sort(freqWithIdx.rbegin(), freqWithIdx.rend());
    vector<ll> buildingCoords(n + 1, 0);
    ll i = 1, j = -1;
    ll idx = 0;
    ll total_time = 0;

    for (auto &[freq, buildingIdx] : freqWithIdx) {
        if (idx % 2 == 0) {
            buildingCoords[buildingIdx] = i;
            total_time += 2LL * freq * abs(i);
            i++;
        } else {
            buildingCoords[buildingIdx] = j;
            total_time += 2LL * freq * abs(j);
            j--;
        }
        idx++;
    }

    cout << total_time << "\n";
    for (ll coord : buildingCoords) cout << coord << " ";
    cout << "\n";
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
}
