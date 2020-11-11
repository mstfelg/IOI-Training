/*
    Title           :   A. Wasted Time
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-11
    Description     :   A solution to: https://codeforces.com/contest/127/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int rate = 50;
	double len = 0;
	int x1, y1;
	cin >> x1 >> y1;
	for (int i = 1; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		len += sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
		x1 = x;
		y1 = y;
	}
	cout << fixed << setprecision(10) << k*len/rate;
	return 0;
}
