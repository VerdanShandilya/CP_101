#include <bits/stdc++.h>
using namespace std;

void helper() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    unordered_map<int, vector<int>> m;

    for(int i = 1; i <= k; i++) {
        m[i].push_back(0);
    }

    for(int i = 0; i < n; i++) {
        m[v[i]].push_back(i + 1);
    }

    for(int i = 1; i <= k; i++) {
        m[i].push_back(n + 1);
    }

    int ans = INT_MAX;

    for(int i = 1; i <= k; i++) {
        vector<int> &temp = m[i];
        int max1 = 0, max2 = 0;

        for(int j = 1; j < temp.size(); j++) {
            int gap = temp[j] - temp[j - 1];
            if (gap > max1) {
                max2 = max1;
                max1 = gap;
            } else if (gap > max2) {
                max2 = gap;
            }
        }

        // After repainting one plank (mid of max1), max gap becomes max(max1/2, max2)
        int cur = max(max1 / 2, max2);
        ans = min(ans, cur);
    }

    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        helper();
    }
    return 0;
}
