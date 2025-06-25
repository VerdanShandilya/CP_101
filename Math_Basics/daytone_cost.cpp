#include <climits>
#include <vector>
#include <iostream>
#include <string>
#include <map>
using ll=long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        bool f=false;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[i]==k){
                cout<<"Yes"<<endl;
                f=true;
                break;
            }
        }
        if(!f){
            cout<<"No"<<endl;
        }
    }
}