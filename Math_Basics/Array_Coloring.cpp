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
        ll n;
        cin>>n;
        int o=0;
        int e=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2){
                o++;
            }
            else{
                e++;
            }
        }
        e+=o/2;
        o=o%2;
        if(o%2){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}