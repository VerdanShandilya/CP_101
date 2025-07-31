#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <unordered_map>
using ll=long long;
using namespace std;
const int mod=1e9+7;

void helper(){
    string s;
    cin>>s;
    unordered_map<char,int> m;
    for(auto i : s){
        m[i]++;
    }
    bool odd=false;
    int cnt=0;
    string o;
    for(auto i : m){
        if(i.second&1 && odd){
            cout<<"NO SOLUTION"<<endl;
            return;
        }
        if(i.second&1){
            odd=true;
            cnt=i.second;
            o=i.first;
        }
    }
    string ans="";
    for(int i=0;i<cnt;i++){
        ans+=o;
    }
    for(auto i : m){
        if(i.second&1){
            continue;
        }
        string sub;
        for(int j=0;j<i.second/2;j++){
            sub+=i.first;
        }
        ans=sub+ans+sub;
    }
    cout<<ans;
}

int main(){
    helper();
}