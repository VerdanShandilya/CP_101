#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ma=-1,mb=-1;
        for(int i=1;i<n-1;i++){
            if(s[i]=='B'){
                mb=i;
            }
            else{
                ma=i;
            }
        }
        if(s[0]=='B' && s[n-1]=='B'){
            cout<<"Bob"<<endl;
        }
        else if(s[0]=='A' && s[n-1]=='B' && mb>0){
            cout<<"Bob"<<endl;
        }
        else if(s[0]=='B' && s[n-1]=='A' && s[n-2]=='B'){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}
