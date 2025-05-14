#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using ll = long long;
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ans+=(count-1);
            }
            else{
                ans+=(count+1);
            }
        }
        cout<<ans<<endl;
    }
}