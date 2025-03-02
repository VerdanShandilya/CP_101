#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using ll = long long;
using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<int> v(n);
    unordered_map<ll,ll> m;
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    ll total_pairs = (n*(n-1))/2;
    for(auto i : m){
        total_pairs -= (i.second*(i.second-1))/2;
    }
    cout<<total_pairs<<endl;
}