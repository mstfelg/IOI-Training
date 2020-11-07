/*
    Title           :   A. Arpa’s hard exam and Mehrdad’s naive cheat
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-07
    Description     :   A solution to: https://codeforces.com/contest/742/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	unsigned short ans;
	if (n == 0)
		ans = 1;
	else {
	n %= 4;
	if (n == 1)
		ans = 8;
	else if (n == 2)
		ans = 4;
	else if (n == 3)
		ans = 2;
	else
		ans = 6;
	}
	cout << ans;
	return 0;
}
