#include <iostream>
#include <vector>
#include <set>
#include <ctime>
using ll = long long;
using namespace std;


bool helper(){
    ll a;
    cin>>a;
    for(int i=2;i<a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

bool solve(ll n){
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}

void seivenum(vector<bool> &isprime,ll n){
    isprime[0]=isprime[1]=false;
    for(int p=2;p*p<=n;p++){
        if(isprime[p]){
            for(int i=p*p;i<=n;i+=p){
                isprime[i]=false;
            }
        }
    }
}


int main() {
    cout<<solve(47);
    ll n;
    cin>>n;
    vector<bool> isprime(n,true);
    seivenum(isprime,n);
    return 0;
}

