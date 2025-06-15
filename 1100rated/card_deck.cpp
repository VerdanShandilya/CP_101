#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <climits>
using ll = long long;
using namespace std;

void helper(){
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n),a(q);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<q;i++){
        cin>>a[i];
    }
    vector<ll> posi(51,n+1);
    for(int i=0;i<n;i++){
        if(posi[v[i]]==n+1){
            posi[v[i]]=i+1;
        }
    }
    for(int i=0;i<q;i++){
        cout<<posi[a[i]]<<" ";
        ll pos=posi[a[i]];
        for(int j=1;j<=50;j++){
            if(posi[j]!=n+1 && posi[j]<pos){
                posi[j]=posi[j]+1;
            }
        }
        posi[a[i]]=1;
    }
    cout<<endl;
}

int main(){
    helper();
}