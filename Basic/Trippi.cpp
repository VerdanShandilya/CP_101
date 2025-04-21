#include <iostream>
#include <string>
using ll=long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        string ans="";
        ans+=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i-1]==' '){
                ans+=s[i];
            }
        }
        cout<<ans<<endl;
    }
}