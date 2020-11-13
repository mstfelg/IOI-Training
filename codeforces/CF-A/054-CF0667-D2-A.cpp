/*
    Title           :   Fancy Fence
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-12
    Description     :   A solution to: http://codeforces.com/contest/270/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int d, h, v, e;
	cin >> d >> h >> v >> e;
	double _v = 4.0*v/(3.1415926535*d*d); // Convert volume to water level
	if (_v > e)
		cout << "YES\n" << setprecision(8) << 1.0*h/(_v-e);
	else
		cout << "NO";
	return 0;
}
