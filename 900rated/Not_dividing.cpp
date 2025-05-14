#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
using ll = long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1){
                v[i]++;
            }
        }
        for(int i=1;i<n;i++){
            if(v[i]%v[i-1]==0){
                v[i]++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}