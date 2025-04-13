#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using ll = long long;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool f=true;
        int diff=INT_MAX;
        for(int i=1;i<n;i++){
            diff=min(diff,v[i]-v[i-1]);
            if(v[i]<v[i-1]){
                cout<<0<<endl;
                f=false;
                break;
            }
        }
        if(f)
        cout<<(diff/2)+1<<endl;
    }
}