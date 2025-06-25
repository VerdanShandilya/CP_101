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
    string c=s;
    sort(c.begin(),c.end());
    if(c==s){
        cout<<"NO"<<endl;
        return;
    }
    ll index=0;
    char z='a';
    for(int i=0;i<s.size();i++){
        if(s[i]!=c[i]){
            index=i;
            z=c[i];
            break;
        }
    }
    cout<<"YES"<<endl;
    for(int i=index+1;i<s.size();i++){
        if(s[i]==z){
            cout<<index+1<<" "<<i+1<<endl;
            return;
        }
    }
}

int main(){
    helper();
}