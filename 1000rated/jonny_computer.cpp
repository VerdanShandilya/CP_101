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
    ll ans=0;
    bool falg=true;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    if(a>b){
        while((a/8)>=b && a%8==0){
            a=a/8;
            ans++;
        }
        while((a/4)>=b && a%4==0){
            a=a/4;
            ans++;
        }
        while((a/2)>=b && a%2==0){
            a=a/2;
            ans++;
        }
        if(a==b){
            cout<<ans<<endl;
            return;
        }
    }
    else{
        while(a*8<=b){
            a=a*8;
            ans++;
        }
        while(a*4<=b){
            a=a*4;
            ans++;
        }
        while(a*2<=b){
            a=a*2;
            ans++;
        }
        if(a==b){
            cout<<ans<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}