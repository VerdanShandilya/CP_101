#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
#include <algorithm>
using ll = long long;
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        string s,n;
        cin>>s>>n;
        unordered_map<char,int> m;
        for(int i=0;i<n.size();i++){
            m[n[i]]++;
        }
        string temp="";
        for(int i=s.size()-1;i>=0;i--){
            if(m.find(s[i])!=m.end() && m[s[i]]>0){
                temp+=s[i];
                m[s[i]]--;
            }
        }
        reverse(temp.begin(),temp.end());
        if(temp==n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}