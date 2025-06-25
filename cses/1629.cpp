#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>>movies(n);
    for (int i=0;i<n;i++) {
        ll a,b;
        cin>>a>>b;
        movies[i]={b,a};
    }
    sort(movies.begin(),movies.end());
    ll cnt=0, last=0;
    for (auto i:movies) {
        if (i.second >= last) {
            cnt++;
            last=i.first;
        }
    }
    cout<<cnt<<endl;
}