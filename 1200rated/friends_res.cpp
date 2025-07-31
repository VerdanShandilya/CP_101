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
#include <algorithm>
using ll = long long;
using namespace std;


void helper(){
    ll n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        v.push_back(b[i]-a[i]);
    }
    sort(v.begin(),v.end());
    int ans=0;
    int l=0;
    int r=v.size()-1;
    while(l<r){
        if(v[l]+v[r]>=0){
            l++;
            r--;
            ans++;
        }
        else{
            l++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}