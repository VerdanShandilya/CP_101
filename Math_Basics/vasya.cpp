#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
using ll = long long;
using namespace std;

void helper(){
    ll a,b;
    cin>>a>>b;
    ll mi=min(a,b);
    ll ma=max(a,b);
    ll rem=ma-mi;
    cout<<mi<<" "<<rem/2<<endl;
}

int main(){
    helper();
}