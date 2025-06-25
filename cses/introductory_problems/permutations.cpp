#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using ll=long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    ll copy=n;
    if(n==3 || n==2){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    if(n==4){
        cout<<"2 4 1 3"<<endl;
        return;
    }
    while(copy>=1){
        cout<<copy<<" ";
        copy=copy-2;
    }
    copy=n-1;
    while(copy>=1){
        cout<<copy<<" ";
        copy=copy-2;
    }
}


int main(){
    helper();
}