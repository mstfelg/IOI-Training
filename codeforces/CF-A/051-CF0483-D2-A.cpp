/*
    Title           :   Counterexample
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-09
    Description     :   A solution to: https://codeforces.com/contest/483/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long l, r;
	cin >> l >> r;
	string ans = "-1";
	if (!(l % 2) && r-l > 1)
		cout << l << " " << l+1 << " " << l+2;
	else if (l % 2 && r-l > 2)
		cout << l+1 << " " << l+2 << " " << l+3;
	else
		cout << -1;
	return 0;
}
