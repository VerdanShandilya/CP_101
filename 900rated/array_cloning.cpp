#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
using ll = long long;
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        int count=0;
        for(auto i : m){
            if(i.second>count){
                count=i.second;
            }
        }
        int ans=0;
        while(count<n){
            ans++;
            int z=n-count;
            ans+=min(count,z);
            count=count+(min(count,z));
        }
        cout<<ans<<endl;
    }
}