/*
Title		:	Team
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-03
Description	:	A solution to: https://codeforces.com/contest/231/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main () {
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    int n; cin >> n;
    bool a, b, c;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
    cin >> a >> b >> c;
    count += (a && b)||(b && c)||(c && a);
    }
    cout << count;
    return 0;
}