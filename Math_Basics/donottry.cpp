#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <climits>
using ll = long long;
using namespace std;

void helper(){
    ll n,m;
    cin>>n>>m;
    string x;
    cin>>x;
    string s;
    cin>>s;
    ll cnt=0;
    int z=6;
    while(z--){
        for(int i=0;i+s.size()<=x.size();i++){
            if(x.substr(i,s.size())==s){
                cout<<cnt<<endl;
                return;
            }
        }
        x+=x;
        cnt++;
    }
    cout<<-1<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}