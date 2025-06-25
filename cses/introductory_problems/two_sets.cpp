#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using ll=long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    ll sum=n*(n+1)/2;
    if(sum&1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<3<<endl;
        ll div=sum/2;
        cout<<n<<" "<<n-1<<" "<<div-(n+n-1)<<endl;
        cout<<n-3<<endl;
        for(int i=1;i<n-1;i++){
            if(i==(div-(n+n-1))){
                continue;
            }
            else{
                cout<<i<<" ";
            }
        }
    }
}


int main(){
    helper();
}