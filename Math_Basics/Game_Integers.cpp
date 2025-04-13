#include <climits>
#include <vector>
#include <iostream>
#include <string>
using ll=long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if((n-1)%3==0 || (n+1)%3==0){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
}