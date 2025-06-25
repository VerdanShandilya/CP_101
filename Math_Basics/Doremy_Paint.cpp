#include <climits>
#include <vector>
#include <iostream>
#include <string>
#include <map>
using ll=long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==2){
            cout<<"Yes"<<endl;
            continue;
        }
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[v[i]]++;
        }
        if(m.size()>2){
            cout<<"No"<<endl;
            continue;
        }
        if(m.size()==1){
            cout<<"Yes"<<endl;
            continue;
        }
        int a=m.begin()->second;
        int b=m.rbegin()->second;
        if(n%2==0){
            if(a==b){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(abs(a-b)==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}