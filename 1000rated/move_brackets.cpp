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
    string s;
    cin>>s;
    ll open=0;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            open++;
        }
        else if(s[i]==')'){
            if(open==0){
                ans++;
            }
            else{
                open--;
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}