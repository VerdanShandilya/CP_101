#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <climits>
#include <set>
#include <numeric>
using ll = long long;
using namespace std;

void helper(){
    ll n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=INT_MAX;
    int l=0;
    int r=0;
    int cnt=0;
    ll sum=accumulate(v.begin(),v.end(),0LL);
    if(sum<m){
        cout<<-1<<endl;
        return;
    }
    while(r<v.size()){
        cnt+=v[r];
        while(cnt>m){
            cnt-=v[l];
            l++;
        }
        int val=v.size()-(r-l+1);
        ans=min(ans,val);
        r++;
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}