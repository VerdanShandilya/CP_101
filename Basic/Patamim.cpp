#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using ll=long long;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_set<int> s;
        vector<int> v;
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x;
                cin>>x;
                if(s.find(x)==s.end()){
                    v.push_back(x);
                    s.insert(x);
                    sum+=x;
                }
            }
        }
        int total=((2*n)*((2*n)+1))/2;
        total-=sum;
        cout<<total<<" ";
        for(auto i : v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}