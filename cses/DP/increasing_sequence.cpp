#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for (int i=0;i<n;i++) {
        cin >> v[i];
    }
    vector<ll> s;
    for (ll i : v) {
        auto it=lower_bound(s.begin(),s.end(),i);

        if (it == s.end()) {
            s.push_back(i);
        } else {
            *it=i;
        }
    }

    cout<<s.size();
    return 0;
}
