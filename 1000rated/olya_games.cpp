#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <climits>   // for LLONG_MAX
#include <numeric>   // for accumulate

using ll = long long;
using namespace std;

void helper() {
    ll m;
    cin>>m;
    vector<ll> s;
    ll minele=LLONG_MAX;
    
    for (int i=0;i<m;i++) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int j=0;j<n;j++) {
            cin >> v[j];
        }
        sort(v.begin(),v.end());
        s.push_back(v[1]);
        minele=min(minele, v[0]);
    }
    sort(s.begin(),s.end());
    ll sum=accumulate(s.begin()+1, s.end(), 0LL)+minele;
    cout << sum << endl;
}

int main() {
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}
