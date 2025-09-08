#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <string>
#include <set>
using ll = long long;
using namespace std;

void helper(){
    string s;
    cin>>s;
    unordered_map<char,int> m;
    set<char> se={'$','^','#','_','-'};
    m['s']=0;
    m['u']=0;
    m['l']=0;
    m['n']=0;
    for(int i=0;i<s.size();i++){
        if(se.count(s[i])){
            m['s']++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            m['l']++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            m['u']++;
        }
        else{
            m['n']++;
        }
    }
    for(auto i : m){
        if(i.second==0){
            cout<<"NO"<<endl;
        }
    }
    if(s.size()>=8){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


int main(){
    helper();
}