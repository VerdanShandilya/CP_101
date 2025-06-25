#include <iostream>
#include <vector>
#include <queue>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;

//Time complexity - O(n)

// int main(){
//   ll n;
//   cin>>n;
//   vector<ll> v;
//   for(ll i=0;i<n;i++){
//     cin>>v[i];
//   }
//   priority_queue<ll ,vector<ll>, greater<ll>> q;
//   priority_queue<ll ,vector<ll>, greater<ll>> q1;
//   for(ll i=0;i<n;i++){
//     if(v[i]%2==0){
//       q.push(v[i]);
//       if(q.size()>2){
//         q.pop();
//       }
//     }
//     else{
//       q1.push(v[i]);
//       if(q1.size()>2){
//         q1.pop();
//       }
//     }
//   }
//   int evensum=0;
//   int oddsum=0;
//   if(q.size()==2){
//     while(!q.empty()){
//       evensum+=q.top();
//       q.pop();
//     }
//   }
//   if(q1.size()==2){
//     while(!q1.empty()){
//       oddsum+=q1.top();
//       q1.pop();
//     }
//   }
//   if(evensum%2!=0 || evensum==0){
//     evensum=-1;
//   }
//   if(oddsum%2!=0 || oddsum==0){
//     oddsum=-1;
//   }
//   ll ans=max(evensum,oddsum);
//   if(ans==0){
//     cout<<-1<<endl;
//   }
//   else{
//     cout<<ans<<endl;
//   }
// }


//Time complexity -O(n logn)
int main(){
  ll n;
  cin>>n;
  vector<ll> even;
  vector<ll> odd;
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x%2==0){
      even.push_back(x);
    }
    else{
      odd.push_back(x);
    }
  }
  int evensum=0;
  sort(even.begin(),even.end());
  sort(odd.begin(),odd.end());
  if(even.size()<2){
    evensum=-1;
  }
  else{
    evensum=even[even.size()-1]+even[even.size()-2];
  }
  int oddsum=0;
  if(odd.size()<2){
    oddsum=-1;
  }
  else{
    oddsum=odd[odd.size()-1]+odd[odd.size()-2];
  }
  cout<<max(evensum,oddsum)<<endl;
}