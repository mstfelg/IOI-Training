/*
Title		:	A. Vanya and Fence
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-02
Description	:	A solution to: https://codeforces.com/contest/677/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    int n, h; cin >> n >> h;
    int a, width = n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        width += (a > h);
    }
    cout << width;
    return 0;
}