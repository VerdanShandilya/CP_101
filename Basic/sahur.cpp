#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string p,s;
        cin>>p>>s;
        vector<int> v;
        vector<int> v1;
        int l=0;
        int r=0;
        if(s[0]!=p[0]){
            cout<<"No"<<endl;
            continue;
        }
        while(r<p.size()+1){
            while(r<p.size() && (r==0 || p[r]==p[r-1])){
                r++;
            }
            v.push_back(r-l);
            l=r;
            r++;
        }
        l=0;
        r=0;
        while(r<s.size()+1){
            while( r<s.size() && (r==0 || s[r]==s[r-1])){
                r++;
            }
            v1.push_back(r-l);
            l=r;
            r++;
        }
        bool a =true;
        if(v.size()!=v1.size()){
            cout<<"No"<<endl;
            continue;
        }
        for(int i=0;i<v.size();i++){
            if(v1[i]<v[i] || v1[i]>2*v[i]){
                a=false;
                cout<<"No"<<endl;
                break;
            }
        }
        if(a){
            cout<<"Yes"<<endl;
        }
    }
}
