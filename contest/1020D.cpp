#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using ll = long long;
using namespace std;

void helper(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n);
    vector<ll> b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int l=0;
    int r=0;
    int count=0;
    int ans=0;
    int pointer=0;
    while(l<n && r<m){
        if(a[l]>=b[r]){
            l++;
            r++;
            pointer=l;
        }
        else{
            l++;
        }
        if(l==n && count==0){
            l=pointer+1;
            count=1;
            ans=b[r];
            r++;
        }
    }
    if(r!=m){
        cout<<-1<<endl;
        return;
    }
    l=n-1;
    r=m-1;
    count=0;
    pointer=0;
    while(l>=0 && r>=0){
        if(a[l]>=b[r]){
            l--;
            r--;
            pointer=l;
        }
        else{
            l--;
        }
        if(l<0 && count==0){
            l=pointer-1;
            count=1;
            if(b[r]<ans){
                ans=b[r];
            }
            r--;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}