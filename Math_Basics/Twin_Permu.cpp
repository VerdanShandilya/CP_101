#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
using ll = long long;
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            cout<<n+1-a<<" ";
        }
        cout<<endl;
    }
}