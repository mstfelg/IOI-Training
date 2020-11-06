/*
    Title           :   A. Is it rated?
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-06
    Description     :   A solution to: https://codeforces.com/contest/807/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a1, b1;
	cin >> a1 >> b1;
	bool isDiff = (a1 != b1);
	bool isDcr = 1;

	for (int i = 1; !isDiff && i < n; ++i) {
		int a, b;
		cin >> a >> b;
		isDiff = isDiff || (a != b);
		isDcr = isDcr && (a1 >= a);
		a1 = a;
	}

	string s;
	if (isDiff)
		s = "rated";
	else if (isDcr)
		s = "maybe";
	else
		s = "unrated";

	cout << s;
	return 0;
}
