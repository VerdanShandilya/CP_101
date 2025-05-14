#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
using ll = long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        if(x%4==0){
            cout<<n<<endl;
        }
        else if(x%4==1){
            if(n%2==0){
                cout<<n-x<<endl;;
            }
            else{
                cout<<n+x<<endl;
            }
        }
        else if(x%4==2){
            if(n%2!=0){
                cout<<n-1<<endl;
            }
            else{
                cout<<n+1<<endl;
            }
        }
        else{
            if(n%2==0){
                cout<<n+x+1<<endl;
            }
            else{
                cout<<n-1-x<<endl;
            }
        }
    }
}