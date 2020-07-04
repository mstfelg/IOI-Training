/*
Title		:	A. Magnets
Author		:	ALELQ, MUSTAFA
Date		:	2019-07-01
Description	:	A solution to: https://codeforces.com/contest/344/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main () {
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    int n;
    cin >> n;
    int mag[n];
    cin >> mag[0];
 
    int mattab = 1;
    for (int i = 1; i < n; ++i) {
        cin >> mag[i];
        mattab += (mag[i] != mag[i-1]);
    }
    cout << mattab;
    return 0;
}