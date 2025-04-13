#include <climits>
#include <vector>
#include <iostream>
#include <string>
#include <map>
using ll=long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        if(x==1 && k==1){
            cout<<"No"<<endl;
        }
        else if(x!=1){
            cout<<"Yes"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if(n%2!=0 && k==2 && x==1){
            cout<<"NO"<<endl;
        }
        else if(n%2!=0){
            cout<<"Yes"<<endl;
            cout<<n/2<<endl;
            for(int i=0;i<(n/2)-1;i++){
                cout<<2<<" ";
            }
            cout<<3<<endl;
        }
        else if(n%2==0){
            cout<<"Yes"<<endl;
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
    }
}