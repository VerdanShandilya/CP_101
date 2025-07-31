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
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> prefix(n);
    sort(v.begin(),v.end());
    prefix[0]=v[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+v[i];
    }
    ll sum=0;
    ll temp=m;
    for(int i=0;i<n;i++){
        if(prefix[i]<=temp){
            sum++;
            temp-=prefix[i];
            sum+=(temp/(i+1));
            temp=m;
        }
        else{
            continue;
        }
    }
    cout<<sum<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}