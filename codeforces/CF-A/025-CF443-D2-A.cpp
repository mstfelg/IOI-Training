/*
Title		:	A. Anton and Letters
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-15
Description	:	A solution to: https://codeforces.com/contest/443/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    // ifstream cin("input.txt");
    set<char> s;
    string str;
    getline(cin, str);
    for (int i = 1; i < str.size(); i += 3)
    {
        s.insert(str[i]);
    }
    cout << s.size()*bool(str[1] != '}');
    
    return 0;
}