#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#include <iomanip>
using namespace std;
using ll = long long;


void helper(string &s1,string &s2,vector<int> &answers,int i,int locc){
    if(i>=s1.size() || i>=s2.size()){
        answers.push_back(locc);
        return;
    }
    if(s2[i]=='?'){
        helper(s1,s2,answers,i+1,locc+1);
        helper(s1,s2,answers,i+1,locc-1);
    }
    else if(s2[i]=='+'){
        helper(s1,s2,answers,i+1,locc+1);
    }
    else{
        helper(s1,s2,answers,i+1,locc-1);
    }
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int loc=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='+'){
            loc++;
        }
        else{
            loc--;
        }
    }
    vector<int> answers;
    int locc=0;
    helper(s1,s2,answers,0,locc);
    int count=0;
    for(int i=0;i<answers.size();i++){
        if(answers[i]==loc){
            count++;
        }
    }
    double ans=(count*1.0)/(answers.size()*1.0);
    cout<<fixed<<setprecision(12)<<ans<<endl;
}