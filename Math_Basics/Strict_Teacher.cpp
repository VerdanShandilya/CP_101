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
        int n,m,q;
        cin>>n>>m>>q;
        int t1,t2;
        cin>>t1>>t2;
        int s;
        cin>>s;
        if((s>t1 && s<t2) || (s<t1 && s>t2)){
            cout<<(abs(t2-t1))/2<<endl;
        }
        else if(s<t1 && s<t2){
            cout<<abs(s-1)+abs(min(t1,t2)-s)<<endl;
        }
        else if(s>t1 && s>t2){
            cout<<abs(n-s)+abs(s-max(t1,t2))<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}