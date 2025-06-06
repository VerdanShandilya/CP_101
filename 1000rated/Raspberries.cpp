#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <climits>
using ll = long long;
using namespace std;

void helper(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int even=0;
    int ans=1e9;
    if(k==2 || k==3 || k==5){
        for(int i=0;i<n;i++){
            if(v[i]%k==0){
                cout<<0<<endl;
                return;
            }
            else{
                int rem=k-(v[i]%k);
                ans=min(ans,rem);
            }
        }
        cout<<ans<<endl;
        return;
    }
    else{
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                even++;
            }
            if(v[i]%4==0){
                cout<<0<<endl;
                return;
            }
            int rem=k-(v[i]%k);
            ans=min(ans,rem);
        }
        if(even>=2){
            cout<<0<<endl;
        }
        else if(even==1){
            cout<<1<<endl;
        }
        else{
            cout<<min(ans,2)<<endl;
        }
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}