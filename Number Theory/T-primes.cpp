    /*
    Title           :   T-primes
    Author          :   ALELQ, MUSTAFA
    Date            :   23 June, 2019
    Description     :   Determine whether a number is a square of a prime or not.
                        a solution to: https://codeforces.com/problemset/problem/230/B
    */
                                /*___________ Naive approach ___________*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // n: number of integers given,
    // maxSize = 1e5
    int n;
    cin >> n;

    // p: Check if p is a square of a prime,
    // maxSize = 1e12
    long p;

    // Pass through all n integers
    for (int i = 0; i < n; ++i) {
        cin >> p;

        // Check if p == 1
        if (p == 1) {cout << "NO" << endl; continue;}

        // Find the first divisor of p (first divisor of a composite is always a prime)
        int j;
        for (j = 2; p % j != 0; ++j) {}

        // Check if it's a perfect square of this prime
        if (p == j * j) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }

    return 0;
}
