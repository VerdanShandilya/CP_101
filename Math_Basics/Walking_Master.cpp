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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b){
            cout<<-1<<endl;
            continue;
        }
        if(a==c && b==d){
            cout<<0<<endl;
            continue;
        }
        ll diffx=c-a;
        ll diffy=d-b;
        if(diffx>diffy){
            cout<<-1<<endl;
            continue;
        }
        else{
            ll ans=0;
            ans+=d-b;
            ll z=a+(d-b);
            ans+=z-c;
            cout<<ans<<endl;
        }
    }
}