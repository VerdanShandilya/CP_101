#include <climits>
#include <vector>
#include <iostream>
#include <string>
using ll=long long;
using namespace std;

bool isPrime(ll n){
    if(n < 2) return 0;

    for(int i=2;i*i<=n;i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int T;
    cin>>T;

    while(T--){
        ll n;
        int k;
        cin>>n>>k;

        if(n> 1 && k > 1){
            cout<<"No"<<endl;
        }
        else if(k==1 && n>1){
            if(isPrime(n))
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
        else{
            ll num=stoll(string(k, '1'));
            if(isPrime(num)) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    
    return 0;
}