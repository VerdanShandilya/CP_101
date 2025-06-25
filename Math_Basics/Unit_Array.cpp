#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
using ll = long long;
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        int neg=0;
        int pos=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[i]<0)
            neg++;
            else
            pos++;
        }
        int ans=0;
        if(neg>pos){
            int diff=neg-pos;
            if(diff%2!=0){
                ans+=(diff/2)+1;
                neg-=ans;
            }
            else{
                ans=diff/2;
                neg-=ans;
            }
        }
        if(neg%2){
            ans++;
        }
        cout<<ans<<endl;
    }
}