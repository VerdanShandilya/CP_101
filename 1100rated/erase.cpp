#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <climits>
#include <set>
using ll = long long;
using namespace std;

void helper(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> freq;
    int count=0;
    vector<char> dis(n,0);
    for(int i=0;i<n;i++){
        freq[s[i]]++;
        if(freq[s[i]]==1){
            count++;
        }
        dis[i]=count;
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=dis[i];
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    helper();
}