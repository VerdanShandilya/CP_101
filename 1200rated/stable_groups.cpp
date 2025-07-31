#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>
using ll = long long;
using namespace std;

void helper() {
    ll n,k,x;
    cin>>n>>k>>x;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=LLONG_MAX;
    sort(v.begin(),v.end());
    int l=1;
    int r=n;
    
}

int main() {
    helper();
    return 0;
}
