#include <iostream>
#include <vector>
#include <set>
using ll = long long;
using namespace std;


void helper() {
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    set<int> s;
    for(auto i : v){
        s.insert(i);
    }
    for(int i=0;i<n;i++){
        if(s.count(v[i]-k)){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}



int main() {
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}




// 6k+0
// 6k+1
// 6k+2
// 6k+3
// 6k+4
// 6k+5