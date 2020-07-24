/*
Title		:	A. Snacktower
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-21
Description	:	A solution to: https://codeforces.com/problemset/problem/767/A
                Does  an array of boolean take the same amount of memory as a bitmask? 
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int m = n-1; // Max number that hasn't appear
    bool snack[n]{0}; // Array of has_appeared(i) initialized by zeroes

    for (int i = 0; i < n; i++)
    {
        int a; cin >> a;
        snack[a-1] = 1;
        while (snack[m]) {
            cout << m+1 << ' ';
            --m;
        }
        cout << endl;
    }

    return 0;
}