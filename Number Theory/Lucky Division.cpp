    /*
    Title           :   Lucky division
    Author          :   ALELQ, MUSTAFA
    Date            :   27 June, 2019
    Description     :   Solution to: https://codeforces.com/problemset/problem/122/A
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    // Start by assuming all numbers are NOT almost lucky
    bool isAlmostLucky = false;

    // Check each divisor of n, while n is NOT almost Lucky, keep checking
    for (int i = 4; !isAlmostLucky && i < n + 1; i++) {
        if (n % i == 0) {
            bool isLucky = true;
            string _i = to_string(i);
            for (int j = 0; j < _i.size(); j++) {
                isLucky &= (_i[j] == '4')||(_i[j] == '7');
            }
            isAlmostLucky |= isLucky;
        }
    }

    // Output
    if (isAlmostLucky)   cout << "YES";
    else        cout << "NO";
    return 0;
}
