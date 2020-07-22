/*
Title		:	A. Oath of the Night's Watch
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-22
Description	:	A solution to: https://codeforces.com/contest/768/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int a[n];
    cin >> a[0];
    int minimum = a[0], maximum = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        minimum = min(minimum, a[i]);
        maximum = max(maximum, a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
        count += (minimum < a[i])&&(a[i] < maximum) ;
    cout << count;
    return 0;
}