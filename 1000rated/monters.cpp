#include <iostream>
#include <queue>
#include <vector>
using ll=long long;
using namespace std;


struct Compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
        if (a.first != b.first)
            return a.first < b.first;
        return a.second > b.second;
    }
};

void helper(){
    ll n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]%k==0){
            v[i]=0;
            cout<<i+1<<" ";
        }
        else{
            v[i]=v[i]%k;
        }
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,Compare> pq;
    for(int i=0;i<n;i++){
        if(v[i]>0)
        pq.push({v[i],i+1});
    }
    while(!pq.empty()){
        cout<<pq.top().second<<" ";
        pq.pop();
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
