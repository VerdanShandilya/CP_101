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
        int count=0;
        int l=0;
        int r=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0){
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]>0){
            l=i;
            break;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]>0)
            r=i;
        }
        if(count==n){
            cout<<0<<endl;
        }
        else{
            bool a=true;
            for(int i=l;i<=r;i++){
                if(v[i]==0){
                    cout<<2<<endl;
                    a=false;
                    break;
                }
            }
            if(a){
                cout<<1<<endl;
            }
        }
    }
}