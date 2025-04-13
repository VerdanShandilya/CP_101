#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
using ll = long long;
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> b;
        vector<int> c;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        b.push_back(v[0]);
        int i=1;
        while(i<n && v[i]==v[i-1]){
            b.push_back(v[i]);
            i++;
        }
        while(i<n){
            c.push_back(v[i]);
            i++;
        }
        if(c.size()==0){
            cout<<-1<<endl;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;

        }
    }
}