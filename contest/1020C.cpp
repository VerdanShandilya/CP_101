#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using ll = long long;
using namespace std;

void helper(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    bool flag=false,flag1=true;
    ll x=0;
    for(int i=0;i<n;i++){
        if(b[i]!=-1){
            x=a[i]+b[i];
            flag=true;
            break;
        }
    }
    if(flag){
        for(int i=0;i<n;i++){
            if(b[i] != -1 && a[i]+b[i]!=x){
                cout<<0<<endl;
                return;
            }
        }
        for(int i=0;i<n;i++){
            if(b[i]==-1){
                ll val= x-a[i];
                if(val<0 || val>k){
                    flag1=false;
                    break;
                }
            }
        }
        if(flag1){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        ll ma=0;
        ll mi=LLONG_MAX;
        for(int i=0;i<n;i++){
            ma=max(ma,a[i]);
            mi=min(a[i]+k,mi);
        }
        if(mi>=ma){
            cout<<mi-ma+1<<endl;
        }
        else{
            cout<<0<<endl;
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