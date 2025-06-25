#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

bool palin(vector<ll>& v,ll l,ll r,ll skip) {
    while (l<=r) {
        if (v[l]==skip) {
            l++;
            continue;
        }
        if (v[r]==skip) {
            r--;
            continue;
        }
        if (v[l]!=v[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

void helper() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for (ll i=0;i<n;i++)
    cin>>v[i];

    ll l=0, r=n-1;
    while (l<r && v[l]==v[r]) {
        l++;
        r--;
    }

    if (l>=r) {
        cout << "YES"<<endl;
        return;
    }
    if(palin(v,l+1,r,v[l]) || palin(v,l,r-1,v[r])) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

int main() {
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}
