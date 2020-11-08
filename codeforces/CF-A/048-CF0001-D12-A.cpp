/*
    Title           :   A. Theatre Square
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-08
    Description     :   A solution to: https://codeforces.com/contest/1/problem/A 
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m, n, a;
    cin >> m >> n >> a;
    cout << ( ((m+a-1)/a) * ( (n+a-1)/a ) );
	return 0;
}
