#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


int helper(string &s,int index){
    if(index>s.size()-1){
        return 0;
    }
    int ans=0;
    if(s[index]=='a' || s[index]=='e' || s[index]=='i' || s[index]=='o' || s[index]=='u'){
        ans=1+helper(s,index+1);
    }
    else{
        ans=helper(s,index+1);
    }
    return ans;
}

int main(){
    string s;
    getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<helper(s,0);
}