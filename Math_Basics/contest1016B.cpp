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
        string n;
        cin>>n;
        ll a=n.size()-1;
        int b=-1;
        int ans=0;
        for(int i=n.size()-1;i>=0;i--){
            if(n[i]!='0'){
                b=i;
                break;
            }
            ans++;
        }
        for(int i=0;i<b;i++){
            if(n[i]!='0'){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}