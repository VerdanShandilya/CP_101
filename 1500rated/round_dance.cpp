#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n+1);
        for (int i=1;i<=n;i++){
            cin>>a[i];
        }

        vector<bool> visited(n+1,false);
        int mincount=0,maxcount=0;

        for (int i=1;i<=n;i++){
            if (!visited[i]){
                int cnt=0;
                int u=i;
                while(!visited[u]){
                    visited[u]=true;
                    u=a[u];
                    cnt++;
                }
                mincount++;            
                maxcount+=cnt/2;     
            }
        }

        cout<<mincount<<" "<<maxcount<<endl;
    }
}

int main() {
    solve();
    return 0;
}
