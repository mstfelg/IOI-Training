/*
Title		:	A. Police Recruits
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-06
Description	:	A solution to: https://codeforces.com/contest/427/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    int sum = 0;    // Total # of available officers
    int count = 0;  // Crime counter
    for (int i = 0; i < n; i++)
    {
        int a; cin >> a;
        count += !(a+1+sum);
        sum += (a) * bool(a+1) - (!(a+1) && (sum > 0));   // sum increases when a != -1 and decreases when it's -1 and the sum it positive.
    }
    cout << count;
    return 0;
}