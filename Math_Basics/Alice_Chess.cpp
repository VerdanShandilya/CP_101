#include <iostream>
#include <unordered_map>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int x=0,y=0;
        int i=0;
        int v=100*n;
        bool z=false;
        while(v){
            if(s[i]=='N')
            y++;
            else if(s[i]=='S')
            y--;
            else if(s[i]=='E')
            x++;
            else if(s[i]=='W')
            x--;
            if(a==x && b==y){
                cout<<"Yes"<<endl;
                z=true;
                break;
            }
            i++;
            if(i==s.size()){
                i=0;
            }
            v--;
        }
        if(!z)
        cout<<"No"<<endl;
    }
}