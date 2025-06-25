#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using ll=long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        int ans=1;
        int count=1;
        int i=1;
        while(i<n){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                ans=max(ans,count);
                count=1;
            }
            i++;
        }
        ans=max(ans,count);
        cout<<ans+1<<endl;

    }
}