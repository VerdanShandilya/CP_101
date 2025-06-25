#include <iostream>
#include <vector>
#include <set>
using ll = long long;
using namespace std;


// void helper() {
//     ll a,b;
//     cin>>a,b;
//     if(a==0){
//         cout<<b;
//         return;
//     }
//     if(b==0){
//         cout<<a;
//         return;
//     }
//     ll ans=0;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             ans=i;
//         }
//     }
//     cout<<ans;
// }

ll gcd(ll a,ll b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}


int main() {
    // helper();
    ll a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}
