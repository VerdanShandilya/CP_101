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
        ll n,x;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            if(i==x){
                continue;
            }
            else{
                cout<<i<<" ";
            }
        }
        if(x<n){
            cout<<x<<endl;
        }
        else{
            cout<<endl;
        }
    }
}