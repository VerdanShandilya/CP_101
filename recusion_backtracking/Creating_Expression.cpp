#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

bool helper(vector<ll> &v,int index,int exp,ll ans) {
    if (index==v.size()) {
        return ans==exp;
    }
    bool add=helper(v,index+1,exp,ans+v[index]);
    bool subtract=helper(v,index+1,exp,ans-v[index]);
    return add || subtract;
}

int main() {
    ll n,exp;
    cin>>n>>exp;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    if(helper(v,0,exp,0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
