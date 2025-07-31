#include <iostream>
#include <string>
using ll = long long;
using namespace std;

void helper() {
    ll n;
    cin >> n;

    string a;
    cin >> a;

    string s='1'+a;       
    string t(s.size(),'1');         

    ll ans=0;

    for(int i=1;i<s.size();i++){

        if(s[i]=='0'){
            for(int j=i;j<s.size();j+=i){
                if (s[j]=='1') 
                break;
                if (t[j]=='1'){
                    t[j]='0';
                    ans+=i;
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    ll t;
    cin>>t;
    while(t--)
    helper();
    return 0;
}
