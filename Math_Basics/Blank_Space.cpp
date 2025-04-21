#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using ll = long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int ans=0;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0){
                sum++;
            }
            else{
                ans=max(ans,sum);
                sum=0;
            }
        }
        ans=max(ans,sum);
        cout<<ans<<endl;
    }
}