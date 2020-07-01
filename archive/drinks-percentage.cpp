    /*
    Title           :   Drink percentage 
    Author          :   ALELQ, MUSTAFA
    Date            :   2020/07/01
    Description     :   A solution to: https://codeforces.com/problemset/problem/200/B
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long double i = 0;
    long double sum = 0;

    for (i; i < n; ++i) {
        long double x; cin >> x;
        sum += x;
    }

    cout << std::setprecision(10) << sum/i;
    return 0;    
}