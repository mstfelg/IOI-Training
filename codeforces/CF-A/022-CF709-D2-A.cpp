/*
Title		:	A. Juicer
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-13
Description	:	A solution to: https://codeforces.com/contest/709/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, b, d;
    cin >> n >> b >> d;
    int count = 0;
    int container = 0;
    for (int i = 0; i < n; i++)
    {
        int a; cin >> a;
        container += a * bool(a <= b);
        count += (container > d);
        container *= bool(container <= d);
    }
    cout << count;
    return 0;
}