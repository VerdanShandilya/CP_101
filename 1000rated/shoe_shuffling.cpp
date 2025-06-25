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
    ll n;
    cin>>n;
    map<ll,vector<ll>> m;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        m[x].push_back(i+1);
    }
    for(auto i : m){
        if(i.second.size()==1){
            cout<<-1<<endl;
            return;
        }
    }
    for(auto i : m){
        auto temp=i.second;
        if(temp.size()%2!=0){
            cout<<temp[temp.size()-1]<<" ";
            for(int i=0;i<temp.size()-1;i++){
                cout<<temp[i]<<" ";
            }
        }
        else{
            for(int j=temp.size()-1;j>=0;j--){
                cout<<temp[j]<<" ";
            }
        }
    }
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}