/*
    Title           :   Even Odds
    Author          :   ALELG, MUSTAFA
    Date            :   2019-06-30
    Description     :   A solution to: https://codeforces.com/contest/318/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	long long k, n;
	cin >> n >> k;
	long long m = k - (n+1)/2;    
	long long l = (2*k-1);
 
	if (k > (n+1)/2) {
		cout << 2 * m;
	}
	else cout << l;
	return 0;
}
