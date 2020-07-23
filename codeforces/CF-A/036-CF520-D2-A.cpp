/*
Title		:	A. Pangram
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-23
Description	:	A solution to: https://codeforces.com/contest/520/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    set<char> alphabet;
    int n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
        alphabet.insert(tolower(s[i]));
    
    cout << ((alphabet.size() < 26) ? "NO" : "YES");
    return 0;
}