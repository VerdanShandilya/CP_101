#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>
#include <queue>
using ll = long long;
using namespace std;


bool bipartite(vector<vector<int>>& g, int n){
    vector<int> color(n+1,-1);

    for (int i=1;i<=n;i++){
        if (!g[i].empty() && color[i]==-1){
            queue<int> q;
            q.push(i);
            color[i]=0;

            while (!q.empty()){
                int u = q.front(); q.pop();
                for (int v : g[u]) {
                    if (color[v]==-1){
                        color[v] =1-color[u];
                        q.push(v);
                    }
                    else if(color[v]==color[u]){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

void helper(){
    ll n;
    cin>>n;
    vector<vector<int>> g(n+1);
    vector<int> v(n+1);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
        v[a]++;
        v[b]++;
    }

    for(int i=1;i<=n;i++){
        if(v[i]>2){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(!bipartite(g,n)){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;

}

int main() {
    ll t;
    cin>>t;
    while(t--)
    helper();
}


