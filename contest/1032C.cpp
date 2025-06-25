#include <iostream>
#include <vector>
using namespace std;

#define int long long
const int M = 998244353;

void solve(){
  int n, m;
cin>>n>>m;
  vector<vector<int>> v(n, vector<int>(m));
  int r=0, c=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>v[i][j];
      if(r<v[i][j]){
        r=v[i][j];
        c=0;
      }
      if(v[i][j]==r){
        c++;
      }
    }
  }
  vector<int> row(n),col(m);
  for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
      if(v[i][j]==r){
        row[i]++;
        col[j]++;
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      int temp=row[i]+col[j]-(v[i][j]==r?1:0);
      if(temp==c){
        cout<<r-1<<"\n";
        return;
      }
    }
  }
  cout<<r<<"\n";
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
