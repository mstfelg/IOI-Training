/*
Title		:	A. Buy a Shovel
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-08
Description	:	A solution to: https://codeforces.com/contest/732/problem/A
                Solving modular congruency relationship:
                Find the minimum m such that m * k = r mod 10 or m * k = 0 mod 10
*/


// Simplified gcd considering only the factors of 10
int gcd(int a) {
    if (a % 10) {
        if (!(a % 5)) {return 5;}
        else if (!(a % 2)) {return 2;}
        else {return 1;}
    }
    else {return 10;}
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, r;
    cin >> k >> r;
    k %= 10;
    unsigned short inv[10] = {1, 1, 1, 7, 3, 1, 2, 3, 4, 9};
    if (!(r % gcd(k))) {cout << (r/gcd(k) * inv[k]) % (10/gcd(k));}
    else {cout << 10/gcd(k);}

    return 0;
}