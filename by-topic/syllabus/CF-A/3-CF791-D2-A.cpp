/*
Title		:	A. Bear and Big Brother
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-02
Description	:	A solution to: https://codeforces.com/contest/791/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main () {
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    double a, b; cin >> a >> b;
    double  c = log(b/a)/log(1.5);
    cout << floor(c) + 1;
    return 0;
}