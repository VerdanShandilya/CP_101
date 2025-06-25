
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <climits>
using ll = long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    unordered_map<int,int> m;
    for(int i=0;i<v.size();i++){
        if(m.find(v[i])!=m.end()){
            cout<<"YES"<<endl;
            return;
        }
        else{
            m[v[i]]++;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}