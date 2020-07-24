/*
Title		:	A. Die Roll
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-11
Description	:	A solution to: http://codeforces.com/contest/9/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

// Simplified gcd considering only the factors of 6
int gcd(int n) {
    if (n % 6) {
        if (!(n % 2)) return 2;
        else if (!(n % 3)) return 3;
        else return 1;
    }
    else return 6;
}

int main() {;
    int a, b;
    cin >> a >> b;
    cout << (7 - max(a, b))/gcd(7 - max(a, b)) << "/" << 6/gcd(7 - max(a, b));
    return 0;
}