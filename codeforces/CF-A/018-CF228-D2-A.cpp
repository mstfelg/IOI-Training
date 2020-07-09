/*
Title		:	Is your horseshoe on the other hoof?
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-09
Description	:	A solution to: https://codeforces.com/contest/228/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    set<int> colors = {a, b, c, d};
    cout << 4 - colors.size();
    return 0;
}