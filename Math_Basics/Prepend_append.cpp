#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
#include <string>
using ll = long long;
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string n;
        cin>>n;
        int count=0;
        int l=0;
        int r=n.size()-1;
        while(l<r){
            if((n[l]=='0' && n[r]=='1') || (n[l]=='1' && n[r]=='0')){
                l++;
                r--;
                count+=2;
            }
            else{
                break;
            }
        }
        cout<<n.size()-count<<endl;;
    }
}