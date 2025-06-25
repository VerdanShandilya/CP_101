#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
using ll = long long;


// void helper3(int k,int &i){
//     if(k>=i){
//         return;
//     }
//     cout<<"*";
//     helper3(k+1,i);
// }
// void helper2(int j,int &n,int i){
//     if(j>n){
//         return;
//     }
//     if(j>(n-i)){
//         cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }
//     helper2(j+1,n,i);
// }
// void helper(int num,int n){
//     if(num>n){
//         return;
//     }
//     helper2(1,n,num);
//     helper3(1,num);
//     cout<<endl;
//     helper(num+1,n);
// }


void space(int s){
    if(s==0){
        return;
    }
    cout<<" ";
    space(s-1);
}
void star(int n){
    if(n==0){
        return;
    }
    cout<<"*";
    star(n-1);
}
void othermethod(int i,int n){
    if(i>n){
        return;
    }
    space(n-i);
    star((2*i)-1);
    cout<<endl;
    othermethod(i+1,n);

}
int main(){
    int n;
    cin>> n;
    
    //using iteration
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(j>(n-i)){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     for(int k=1;k<i;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    //using recursion
    // helper(1,n);
    othermethod(1,n);
}