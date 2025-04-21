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
        ll x;
        cin>>x;
        if(x<=10){
            cout<<x<<endl;
            continue;
        }
        if(x<100){
            cout<<9+(x/10)<<endl;
            continue;
        }
        else if(x<1000){
            cout<<18+(x/100)<<endl;
            continue;
        }
        else if(x<10000){
            cout<<27+(x/1000)<<endl;
            continue;
        }
        else if(x<100000){
            cout<<36+(x/10000)<<endl;
            continue;
        }
    }
}