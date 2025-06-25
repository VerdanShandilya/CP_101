#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
using ll = long long;
using namespace std;

void helper(){
    ll n,m,i,j;
    cin>>n>>m>>i>>j;
    ll distl=(i-1)+(j-1);
    ll distr=abs(i-1)+abs(m-j);
    ll disbl=abs(n-i)+abs(j-1);
    ll disbr=(n-i)+(m-j);
    if((distl+disbr)>(disbl+distr)){
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
    }
    else{
        cout<<1<<" "<<m<<" "<<n<<" "<<1<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}