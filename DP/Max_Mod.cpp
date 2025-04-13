#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<-1<<endl;
        }
        else if(n==3){
            cout <<"3 2 1"<< "\n";
        }
        else{
            vector<int> v;
            v.push_back(n);
            for(int i=1;i<=n-1;i++){
                v.push_back(i);
            }
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}