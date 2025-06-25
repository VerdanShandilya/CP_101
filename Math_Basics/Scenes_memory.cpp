#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
using ll = long long;
using namespace std;


bool isprime(ll n){
    if(n<=1){
        return false;
    }
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        bool a=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='9' || s[i]=='8'){
                cout<<1<<endl;
                cout<<s[i]<<endl;
                a=true;
                break;
            }
        }
        if(a)
        continue;
        if(s.size()>1 && (s[s.size()-1]=='2' || s[s.size()-1]=='5')){
            cout<<2<<endl;
            cout<<s[s.size()-2]<<s[s.size()-1]<<endl;
            continue;
        }
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(!isprime((s[i]-'0')*10+(s[j]-'0'))){
                    cout<<2<<endl;
                    cout<<s[i]<<s[j]<<endl;
                    a=true;
                    break;
                }
            }
            if(a)
            break;
        }
        
    }
}