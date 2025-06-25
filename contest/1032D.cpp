#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    for (int i=0;i<n;i++) {
        cin>>b[i];
    }

    vector<pair<ll,ll>> ans;

    ll j = 0;
    while (j < n) {
        ll val = -1;
        ll ind = 0;
        for (int i = 0; i < n - j; i++) {
            if (a[i] > val) {
                val = a[i];
                ind = i;
            }
        }
        while (ind < n - j - 1) {
            swap(a[ind], a[ind + 1]);
            ans.push_back({1, ind + 1});
            ind++;
        }
        j++;
    }

    j = 0;
    while (j < n) {
        ll val = -1;
        ll ind = 0;
        for (int i = 0; i < n - j; i++) {
            if (b[i] > val) {
                val = b[i];
                ind = i;
            }
        }
        while (ind < n - j - 1) {
            swap(b[ind], b[ind + 1]);
            ans.push_back({2, ind + 1});
            ind++;
        }
        j++;
    }

    for (int i = 0; i < n; i++) {
        if (b[i] < a[i]) {
            ans.push_back({3, i + 1});
        }
    }

    cout<<endl;
    cout << ans.size() << '\n';
    for (auto i : ans) {
        cout << i.first << " " << i.second << "\n";
    }
    cout << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
