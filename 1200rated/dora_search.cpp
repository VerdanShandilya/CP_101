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
using ll = long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int a=1;
    int b=n;
    int l=0;
    int r=n-1;
    while(l<=r){
        if(v[l]==a){
            l++;
            a++;
            continue;
        }
        if(v[l]==b){
            l++;
            b--;
            continue;
        }
        if(v[r]==a){
            r--;
            
            a++;
            continue;
        }
        if(v[r]==b){
            r--;
            b--;
            continue;
        }
        cout<<l+1<<" "<<r+1<<endl;
        return;
    }
    cout<<-1<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}