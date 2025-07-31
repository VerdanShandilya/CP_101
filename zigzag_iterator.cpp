#include <vector>
#include <iostream>
#include <queue>
#include <cmath>
#include <map>
using ll=long long;
using namespace std;

int main(){
    vector<vector<int>> v={{1,2,3},{4,5,6,7},{8,9}};
    map<int,int> m;
    for(int i=0;i<v.size();i++){
        m[i]=0;
    }
    vector<int> ans;
    while (!m.empty()){
        for (auto i=m.begin();i!=m.end();){
            int index=i->first;
            int pos=i->second;
            if (pos>=v[index].size()) {
                i=m.erase(i);
            }
            else{
                ans.push_back(v[index][pos]);
                i->second++;
                ++i;
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}