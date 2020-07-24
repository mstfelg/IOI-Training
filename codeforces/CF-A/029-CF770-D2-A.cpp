/*
Title		:	New Password
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-18
Description	:	A solution to: https://codeforces.com/contest/770/problem/A 
*/

#include <bits/stdc++.h>
using namespace std;

string operator*(string s, int n) {
    string r;
    for (int i = 0; i < n; i++)
        r += s;
    return r;
}

int main() {
    const string alphabet = "abcdefghijklmnopqrstuvwxyz";
    unsigned short int n, k;
    cin >> n >> k;
    cout << (alphabet.substr(0, k)*(n/k + 1)).substr(0, n);
    return 0;
}