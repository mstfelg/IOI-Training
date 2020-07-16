/*
Title		:	A. Way Too Long Words
Author		:	ALELQ, MUSTAFA
Date		:	2019-06-26
Description	:	A solution to: https://codeforces.com/contest/71/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int j = 0; j < n; j++) {
    string str;
    cin >> str;
    if (str.size()>10) {
        cout << str[0] << str.size() - 2 << str[str.size()-1] << "\n";
    }
    else cout << str << "\n";
    }
    return 0;
}