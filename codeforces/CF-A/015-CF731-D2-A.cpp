/*
Title		:	Night at the Museum
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-06
Description	:	A solution to: https://codeforces.com/contest/731/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main () {
    string s; cin >> s;
    char a = 'a';
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        count += min(abs((a-s[i])), 26 - abs((a-s[i])));
        a = s[i];
    }
    cout << count;

    return 0;
}