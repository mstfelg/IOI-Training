/*
Title		:	A. Colorful Stones (Simplified Edition)
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-10
Description	:	A solution to: https://codeforces.com/contest/265/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    int n = 1, m = 1; // current stone and current instruction

    while ((s.size()-n) && (t.size()-m+1)) {
        n += s[n-1] == t[m-1];
        ++m;
    }
    cout << n;
    return 0;
}