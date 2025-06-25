#include <iostream>
using namespace std;
using ll=long long;

void helper(ll t){
    if(t==0){
        return;
    }
    cout<<t;
    if(t!=1)
    cout<<" ";
    helper(t-1);
}
int main(){
    ll t;
    cin>>t;
    helper(t);
}