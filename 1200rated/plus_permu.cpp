#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <climits>
#include <set>
using ll = long long;
using namespace std;

void helper(){
    ll n,x,y;
    cin>>n>>x>>y;
    set<ll> s;
    ll xcnt=0;
    ll i=x;
    while(i<n){
        s.insert(i);
        i=i+x;
        xcnt++;
    }
    ll ycnt=0;
    ll copy=0;
    i=y;
    while(i<n){
        if(s.count(y)){
            copy++;
        }
        else{
            ycnt++;
            s.insert(i);
        }
        i=i+y;
    }
    xcnt=xcnt-copy;
    ll sum=0;
    while(xcnt>0){
        sum+=n;
        n--;
        xcnt--;
    }
    cout<<endl;
    i=1;
    while(ycnt>0){
        sum-=i;
        i++;
        ycnt--;
    }
    cout<<sum<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}