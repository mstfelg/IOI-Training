/*
Title		:	A. Stones on the Table
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-05
Description	:	A solution to: https://codeforces.com/contest/266/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n;
    cin >> n;
    n = 0;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size()-1; i++) {
        if (s[i] == s[i+1]) {
            count++;
        }
    }
    cout << count;
    return 0;
}