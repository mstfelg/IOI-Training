/*
    Title           :   A. Anton and Polyhedrons
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-08
    Description     :   A solution to: https://codeforces.com/contest/785/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int count = 0;
	for (int i = 0; i < n; ++i) {
		string s; cin >> s;
		if (s == "Tetrahedron")
			count += 4;
		else if (s == "Cube")
			count += 6;
		else if (s == "Octahedron")
			count += 8;
		else if (s == "Dodecahedron")
			count += 12;
		else
			count += 20;
	}
	cout << count;
	return 0;
}
