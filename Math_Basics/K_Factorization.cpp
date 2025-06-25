#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using ll = long long;
using namespace std;


bool isprime(ll n){
    if(n<=1){
        return false;
    }
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    for(ll i=2;i<=100000;i++){
        if(isprime(i)){
            v.push_back(i);
        }
    }
    ll i=0;
    vector<ll> ans;
    while(n>1){
        if(n%v[i]==0){
            ans.push_back(v[i]);
            n=n/v[i];
        }
        else{
            i++;
        }
    }
    if(ans.size()<k){
        cout<<-1<<endl;
    }
    else{
        for(int i=0;i<k-1;i++){
            cout<<ans[i]<<" ";
        }
        ll count=1;
        for(int i=k-1;i<ans.size();i++){
            count*=ans[i];
        }
        cout<<count<<endl;
    }
}