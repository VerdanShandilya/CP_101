#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#include <iomanip>
using namespace std;
using ll = long long;


ll helper(vector<ll> &v,int index){
    if(index>v.size()-1){
        return 0;
    }
    ll ans=v[index]+helper(v,index+1);
    return ans;
}
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<fixed<<setprecision(6)<<(double)helper(v,0)/v.size()<<endl;
}