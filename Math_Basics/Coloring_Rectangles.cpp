#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using ll = long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll prod=n*m;
        ll ans=0;
        while(true){
            if(prod%3==0){
                ans+=prod/3;
                break;
            }
            else{
                ans++;
                prod-=2;
            }
        }
        cout<<ans<<endl;
    }
}