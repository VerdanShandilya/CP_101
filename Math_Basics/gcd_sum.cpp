// #include <bits/stdc++.h>
#include <iostream>
#include <cctype>
#include <numeric>
using namespace std;

long long gcd_sum(long long num) {
long long tmp = num, digitsum = 0;

    while (tmp > 0) {
        digitsum += tmp % 10;
        tmp /= 10;
    }

    long long gcd=__gcd(num, digitsum);
    return gcd;
}

int main(void) {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        if (gcd_sum(n)!= 1){
            cout << n << endl;
        }
        else if (gcd_sum(n + 1)!= 1){
            cout << n + 1 << endl;
        } 
        else if (gcd_sum(n + 2)!= 1) {
            cout << n + 2 << endl;
        }
    }
    return 0;
}
