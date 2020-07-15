/*
Title		:	Beautiful Matrix
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-03
Description	:	A solution to: https://codeforces.com/contest/263/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main () {
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    bool flag = 0;
    int i = 0;
    while (!flag && i < 25)
    {
     bool a; cin >> a;
     flag = a;
     i++;
    }
    cout << endl << abs(i/5 + (i % 5 != 0) - 3) + abs((i-1)% 5 - 2);
    return 0;
}