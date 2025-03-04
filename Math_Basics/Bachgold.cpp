#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using ll = long long;
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll count=n/2;
    cout<<count<<endl;
    for(ll i=0;i<count-1;i++){
        cout<<2<<" ";
    }
    if(n%2!=0)
    cout<<3<<endl;
    else
    cout<<2<<endl;
}