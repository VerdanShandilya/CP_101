#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <_map>
using ll = long long;

using namespace std;

void helper() {
    ll n,m;
    cin>>n>>m;
    int cnt=0;
    map<int,int> ma;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ma[x%m]++;
    }
    int ans=0;
    for(auto i : ma){
        if(i.first==0){
            ans++;
        }
    }

}

int main() {
    ll t;
    cin>>t;
    while(t--)
    helper();
    return 0;
}
