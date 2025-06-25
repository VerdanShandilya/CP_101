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
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0;
        bool a=true;
        for(int i=n-2;i>=0;i--){
            while(v[i]>=v[i+1]){
                if(v[i] == v[i+1] && v[i]==0){
                    a = false;
                    break;
                }
                v[i]=v[i]/2;
                ans++;
            }
        }
        if(a){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}