#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using ll=long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> m;
        for(auto i : s){
            m[i]++;
        }
        if(m.size()==1){
            cout<<"YES"<<endl;
            continue;
        }
        int odd=0;
        for(auto &i : m){
            if(i.second%2!=0){
                odd++;
            }
        }
        if(odd>k+1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}