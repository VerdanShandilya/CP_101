#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        ll ma=0;
        ll mi=0;
        ll copy=n;
        if(n<4 || n%2!=0){
            cout<<-1<<endl;
            continue;
        }
        while(copy%6!=0){
            mi++;
            copy-=4;
        }
        mi+=(copy/6);
        copy=n;
        while(copy%4!=0){
            ma++;
            copy-=6;
        }
        ma+=(copy/4);
        cout<<mi<<" "<<ma<<endl;
    }
}
