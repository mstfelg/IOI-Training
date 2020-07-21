/*
Title		:	A. Mahmoud and Longest Uncommon Subsequence
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-20
Description	:	A solution to: https://codeforces.com/contest/766/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    const int result = max(s1.size(), s2.size()) - ((s1.size()+1)*bool(s1 == s2));
    cout << result;
    return 0;
}