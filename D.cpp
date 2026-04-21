#include <bits/stdc++.h>
#include <algorithm>
using ll = long long;
#define vll vector<long long>
using namespace std;

void helper(){
    ll n;
    cin>>n;
    multiset<int> ms;
    ll sum=0;
    while(n--){
        ll z; cin>>z;
        if(z==1 || z==2){
            ll val; cin>>val;

            if(z==1){
                sum+=val;
                ms.insert(val);
            }
            if(z==2){
                if(ms.find(val)!=ms.end()){
                    auto it=ms.lower_bound(val);
                    ms.erase(*it);
                    sum-=val;
                }
            }
        }
        else{
            string s;
            cin>>s;
            if(z==3){
                if(ms.size()>0) cout<<*ms.begin()<<"\n";
                else cout<<-1<<"\n";
            }
            else if(z==4){
                if(ms.size()>0) cout<<*ms.end()<<"\n";
                else cout<<-1<<"\n";
            }
            else cout<<sum<<"\n";
        }
    }
}

int main(){
    ll t; cin>>t;
    while(t--) helper();
}