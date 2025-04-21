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
        ll n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int r=0;
        int ans=0;
        int count=0;
        while(r<n){
            if(r==0 || v[r]-v[r-1]<=k){
                count++;
            }
            else{
                ans=max(ans,count);
                count=1;
            }
            r++;
        }
        ans=max(ans,count);
        cout<<n-ans<<endl;
    }
}