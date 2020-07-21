/*
Title		:	A. Lineland Mail
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-19
Description	:	A solution to: https://codeforces.com/contest/567/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int city[n];
    for (int i = 0; i < n; i++)
        cin >> city[i];
    cout << city[1]-city[0] << ' ' << city[n-1]-city[0] << endl;
    for (int i = 1; i < n-1; i++)
        cout << min(city[i]-city[i-1], city[i+1]-city[i]) << ' ' << max(city[i]-city[0], city[n-1]-city[i]) << endl;
    cout << city[n-1]-city[n-2] << ' ' << city[n-1]-city[0] << endl;
    return 0;
}