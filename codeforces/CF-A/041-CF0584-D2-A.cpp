/*
    Title           :   A. Olesya and Rodion
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-06
    Description     :   A solution to: https://codeforces.com/contest/584/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	if (n == 1) {
		if (t == 10)
			cout << -1;
		else
			cout << t;
	}
	else {
		cout << t;
		int i = 1;
		i += (t == 10);
		for (; i < n; ++i)
			cout << 0;
	}
	return 0;
}

