#include <iostream>
#include <vector>
#include <queue>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (){
    ll a,b,k;
    cin>>a>>b>>k;
    ll mi = min(a,b);
    priority_queue<ll ,vector<ll>, greater<ll>> q;
    for(int i=1;i<=mi;i++){
        if(a%i==0 && b%i==0){
            q.push(i);
        }
        if(q.size()>k){
            q.pop();
        }
    }
    cout<<q.top()<<endl;
}