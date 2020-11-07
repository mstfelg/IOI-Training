/*
    Title           :   A. Valera and X
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-07
    Description     :   A solution to: https://codeforces.com/contest/404/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;
string row(int r, int n, char c1, char c2) {
	string s;
	for (int i = 0; i < n; ++i)
		s += c2;
	s[r] = c1;
	s[n-1-r] = c1;
	return s;
}
int main()
{
	int n; cin >> n;
	string s; cin >> s;
	char c1 = s[0], c2 = s[1];
	bool flag = (c1 != c2)&&(s == row(0, n, c1, c2));
	for (int i = 1; flag && i < n; ++i) {
		cin >> s;
		flag = flag && s == row(i, n, c1, c2);
	}
	cout << (flag ? "YES" : "NO");
	return 0;
}
