#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
using ll = long long;
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]==s[s.size()-1]){
            cout<<s<<endl;
        }
        else{
            string ans=s.substr(0,s.size()-1);
            cout<<ans;
            if(s[0]=='a'){
            cout<<"a"<<endl;
            }
            else{
                cout<<"b"<<endl;
            }
        }
    }
}