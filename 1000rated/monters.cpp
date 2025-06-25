#include <iostream>
#include <queue>
#include <vector>
using ll=long long;
using namespace std;

struct Compare {
    bool operator()(const pair<ll,ll>& a, const pair<ll,ll>& b) const {
        if (a.first != b.first)
            return a.first < b.first;
        return a.second > b.second;    
    }
};


void helper(){
    ll n,k;
    cin>>n>>k;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,Compare> pq;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        pq.push({x,i});
    }
    while(!pq.empty()){
        auto temp=pq.top();
        pq.pop();
        ll val=temp.first-k;
        ll index=temp.second;
        if(val<=0){
            cout<<index+1<<" ";
        }
        else{
            pq.push({val,index});
        }
    }
    cout<<endl;

}
int main() {
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
    return 0;
}
