#include <iostream>
#include <vector>
#include <string>
using ll = long long;
using namespace std;

void helper() {
    ll n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    s += s;
    ll ans=0;
    if(c=='g'){
        cout<<0<<endl;
        return;
    }
    ll i=0;
    while(i<s.size()){
        if (s[i]==c) {
            ll cnt=0;
            i=i+1;
            while (i<s.size() && s[i]!='g') {
                cnt++;
                i++;
            }
            ans=max(ans,cnt+1);
        }
        i++;
    }
    cout<<ans<<endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        helper();
    }
}
