#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin>>n;
    vector<int> v(n-1,0);
    ll total_sum = (n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        int a;
        cin>>a;
        v[i]=a;
        total_sum-=v[i];
    }
    cout<<total_sum<<endl;
    return 0;
}
