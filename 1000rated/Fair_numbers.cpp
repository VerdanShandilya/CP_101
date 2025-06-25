
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
    while(true){
        string s= to_string(n);
        bool a=true;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                ll z=s[i]-'0';
                if(n%z!=0){
                    a=false;
                    break;
                }
            }
        }
        if(a){
            cout<<s<<endl;
            break;
        }
        n++;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}