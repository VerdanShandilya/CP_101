#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll cnt=0;
        string s;
        cin>>s;
        vector<string> v;
        string str="";
        for(int i=0;i<s.size();i++){
            str="";
            if(s[i]=='0'){
                continue;
            }
            else{
                char a=s[i];
                str+=a;
                for(int j=i+1;j<s.size();j++){
                    str+='0';
                }
                v.push_back(str);
            }
            cnt++;
        }
        cout<<cnt<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}