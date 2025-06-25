#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using ll=long long;
using namespace std;

void helper(){
    string s;
    cin>>s;
    int l=0;
    int r=0;
    int ans=0;
    int temp=0;
    while(r<s.size()){
        if(r==0 || s[r]==s[r-1]){
            temp++;
        }
        else{
            ans=max(ans,temp);
            temp=1;
        }
        r++;
    }
    ans=max(ans,temp);
    cout<<ans;
}


int main(){
    helper();
}