#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

bool helper(){
    ll n;
    cin>>n;
    if(n%2!=0){
        cout<<(n-1)/2<<endl;
    }
    else{
        cout<<n/2<<endl;
    }
}

int main() {
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}
