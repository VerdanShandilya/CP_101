#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define allasc(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define alldesc(v) sort(v.rbegin(), v.rend())
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vp vector<pair<int,int>>
const int mod=1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,q;
    cin>>n>>q;

    vi v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }

    unordered_map<int,int> m;
    int prev=-1;

    while (q--) {
        int t;
        cin>>t;

        if (t==1) {
            int i, x;
            cin>>i>>x;
            i--;

            if(prev==-1){
                sum-=v[i];
                v[i]=x;
                sum+=v[i];
            }
            else{
                int prevval;
                if(m.find(i)!=m.end()){
                    prevval=m[i];
                }
                else{
                    prevval=prev;
                }
                sum-=prevval;
                sum+=x;
                m[i]=x;
            }
            cout<<sum<<'\n';

        }
        else if(t==2){
            int x;
            cin>>x;
            prev=x;
            m.clear();
            sum=1LL*n*x;
            cout<<sum<<'\n';
        }
    }

    return 0;
}
