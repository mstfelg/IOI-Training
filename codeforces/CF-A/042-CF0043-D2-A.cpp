/*
    Title           :   A. Football
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-06
    Description     :   A solution to: https://codeforces.com/contest/43/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int g1 = 1;
	int g2 = 0;
	string a, b; cin >> a;
	for (int i = 1; i < n; ++i) {
		string c; cin >> c;
		if (a == c)
			++g1;
		else {
			b = c;
			++g2;
		}
	}
	cout << (g1 > g2 ? a : b);
	return 0;
}
