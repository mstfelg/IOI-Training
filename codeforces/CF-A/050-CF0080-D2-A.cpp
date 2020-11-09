/*
    Title           :   A. Panoramix's Prediction
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-08
    Description     :   A solution to: https://codeforces.com/contest/80/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	bool isPrime[m];
	isPrime[0] = 0;
	for (int i = 1; i < m; ++i)
		isPrime[i] = 1;

	for (int i = 2; i*i <= m; ++i)
		for (int j = i*i; j <= m; j += i)
			isPrime[j-1] = 0; 
	unsigned int count = 0;
	for (int i = n; i < m; ++i)
		count += isPrime[i];
		// if (isPrime[i]) cout << i+1 << " ";
	cout << (count == 1 && isPrime[m-1] ? "YES" : "NO");
	return 0;
}
