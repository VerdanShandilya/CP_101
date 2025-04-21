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
        ll n,k;
        cin>>n>>k;
        if(n==1 && k!=1){
            cout<<"No"<<endl;
            continue;
        }
        if(n%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            if(k%2 && k<=n){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}