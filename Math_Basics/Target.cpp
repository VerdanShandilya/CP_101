#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <climits>
using ll = long long;
using namespace std;

void helper(){
    vector<vector<char>> v(10,vector<char>(10));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>v[i][j];
        }
    }
    ll sum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(v[i][j]=='.'){
                continue;
            }
            if(i==0 || j==0 || i==9 || j==9){
                sum+=1;
            }
            else if(i==1 || j==1 || i==8 || j==8){
                sum+=2;
            }
            else if(i==2 || j==2 || i==7 || j==7){
                sum+=3;
            }
            else if(i==3 || j==3 || i==6 || j==6){
                sum+=4;
            }
            else{
                sum+=5;
            }           
        }
    }
    cout<<sum<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        helper();
    }
}