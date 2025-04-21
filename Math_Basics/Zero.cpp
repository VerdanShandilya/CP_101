#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
using ll = long long;
using namespace std;


int main(){
    ll t;
    cin>> t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i< n;i++){
            cin>>v[i];
        }
        int x=0;
        for(int i=0;i<n;i++){
            x^=v[i];
        }
        if(v.size()%2==0 && x==0){
            cout<<0<<endl;
        }
        else if(v.size()%2==0){
            cout<<-1<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
}