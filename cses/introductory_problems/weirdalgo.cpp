#include <iostream>
#include <vector>
#include <algorithm>
using ll=long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n&1){
            n=(n*3)+1;
            cout<<n<<" ";
        }
        else{
            n=n/2;
            cout<<n<<" ";
        }
    }
}


int main(){
    helper();
}