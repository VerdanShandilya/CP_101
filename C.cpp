#include <bits/stdc++.h>
using namespace std;

const int MAX=200005;
int spf[MAX];

void sieve(){
    for(int i=0;i<MAX;i++) spf[i]=i;
    for(int i=2;i*i<MAX;i++) {
        if(spf[i]==i){
            for(int j=i*i;j<MAX;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
}

vector<int> helper1(int x) {
    vector<int> v;
    while(x>1){
        int p=spf[x];
        v.push_back(p);
        while (x%p==0) x/=p;
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    return v;
}

void helper() {
    int n;
    cin>>n;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();
    int t;
    cin>>t;
    while (t--)
    helper();
}
