#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0;
        int count=1;
        for(int i=1;i<n;i++){
            if(v[i]%2==v[i-1]%2){
                count++;
            }
            else{
                ans+=count-1;
                count=1;
            }
        }
        ans+=count-1;
        cout<<ans<<endl;
    }
}