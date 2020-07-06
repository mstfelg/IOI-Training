/*
Title		:	A. Word
Author		:	ALELQ, MUSTAFA
Date		:	2020-06-30
Description	:	A solution to: https://codeforces.com/contest/59/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;

    int capCount = 0;
 
    for (int i = 0; i < s.size(); ++i) {
        if (isupper(s[i])) ++capCount;
    }
    if (2 * capCount > s.size()) {
        for (int i = 0; i < s.size(); ++i) {
            s[i] = toupper(s[i]);
        }
    }
    else {
        for (int i = 0; i < s.size(); ++i) {
            s[i] = tolower(s[i]);
        }    
    }
    cout << s;
    return 0;
}