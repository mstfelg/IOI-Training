/*
Title		:	A. Shaass and Oskols
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-10
Description	:	A solution to: https://codeforces.com/contest/294/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int lines[n+2];
    for (int i = 1; i < n+1; i++)
        cin >> lines[i];
    
    int m; cin >> m;
    for (int i = 0; i < m; i++)
    {
        int row, col;
        cin >> row >> col;
        lines[row+1] += lines[row] - col;
        lines[row-1] += col-1;
        lines[row] = 0;
    }
    for (int i = 1; i < n+1; i++)
    {
        cout << lines[i] << "\n";
    }
    return 0;
}