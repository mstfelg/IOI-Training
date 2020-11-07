/*
    Title           :   A. Calculating Function
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-07
    Description     :   A solution to: https://codeforces.com/contest/486/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n; cin >> n;
	cout << (n % 2 ? -1 : 1) * (n+1)/2;
	return 0;
}
