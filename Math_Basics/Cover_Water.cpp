#include <climits>
#include <vector>
#include <iostream>
#include <string>
using ll=long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        if(s[0]=='.'){
            ans++;
        }
        if(s[s.size()-1]=='.' && n>1){
            ans++;
        }
        bool a=true;
        for(int i=1;i<s.size()-1;i++){
            if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.'){
                cout<<2<<endl;
                a=false;
                break;
            }
            if(s[i]=='.'){
                ans++;
            }
        }
        if(a){
            cout<<ans<<endl;
        }
    }
}