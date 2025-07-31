#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <climits>
#include <set>
using ll = long long;
using namespace std;

void helper(){
    string s,p;
    cin>>s>>p;
    if(s==p){
        cout<<2*s.size()<<endl;
        return;
    }
    int prefix=0;
    int index=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==p[0]){
            prefix++;
        }
        else{
            index=i;
            break;
        }
    }
    int ans=0;
    int t1=s[index]-'a';
    int t2=p[index]-'a';
    if(t2-t1>1){
        cout<<2*s.size()<<endl;
    }
    else{
        ans++;
        for (int i =index+1;i<s.size();i++) {
                if (s[i] =='9' && p[i]=='0')
                ans++;
                else
                break;
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