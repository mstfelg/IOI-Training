/*
    Title           :   A. Brain's Photos
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-06
    Description     :   A solution to: https://codeforces.com/contest/707/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, n; cin >> m >> n;
	m *= n;
	string ans = "#Black&White";
	bool isCol = 0;
	while (!isCol && m--) { 
		char pix; cin >> pix;
		isCol = isCol || (pix == 'C') || (pix == 'M') || (pix == 'Y');
	}
	if (isCol) ans = "#Color";
	cout << ans;
	return 0;
}
