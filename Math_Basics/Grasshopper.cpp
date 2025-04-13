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
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else if(x%k==0){
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }
    }
}