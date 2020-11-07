/*
    Title           :   Dubstep
    Author          :   ALELG, MUSTAFA
    Date            :   2019-07-01
    Description     :   A solution to: https://codeforces.com/contest/208/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	string s;
	cin >> s;
	int p = 0;
	while ((p = s.find("WUB" , p)) != -1) {
		if (p > 0 && s[p-1] != ' ') {
			s.replace(p , 3 , " ");
		}
		else {
		s.replace(p , 3 , "");
		}
	}
	// while (s.size() && s.back() == ' ')
	//     s.pop_back();                        To remove the last space
 
	cout << s;
	return 0;
}
