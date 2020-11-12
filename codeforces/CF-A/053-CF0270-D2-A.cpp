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
	int t; cin >> t;
	for (int i = 0; i < t; ++i) {
		int a; cin >> a;
		cout << ((360.0/(180-a) == 360/(180-a))?"YES\n":"NO\n");
	}
	return 0;
}
