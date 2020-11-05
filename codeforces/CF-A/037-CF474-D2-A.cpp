/*
    Title           :   Keyboard
    Author          :   ALELG, MUSTAFA
    Date            :   2020-11-05
    Description     :   A solution to: https://codeforces.com/contest/474/problem/A 
*/
#include <bits/stdc++.h>
using namespace std;

/* MAPPING GENERATOR
	string r[3] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
	string r_str, l_str;
	r_str = l_str = "{";
	for (int i = 0; i < 3; ++i) {
		for (int j = 1; j < 10; ++j) {
			r_str += string("{'")+r[i][j]+"', '"+r[i][j-1]+"'}, ";
		}
	}
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 9; ++j) {
			l_str += string("{'")+r[i][j]+"', '"+r[i][j+1]+"'}, ";
		}
	}
	r_str.erase(r_str.size()-2, 2);
	l_str.erase(l_str.size()-2, 2);
	r_str.append("}");
	l_str.append("}");
	cout << l_str << "\n" << r_str << endl;
*/
 
int main() {
    map<char, char> R = {{'w', 'q'}, {'e', 'w'}, {'r', 'e'}, {'t', 'r'}, {'y', 't'}, {'u', 'y'}, {'i', 'u'}, {'o', 'i'}, {'p', 'o'}, {'s', 'a'}, {'d', 's'}, {'f', 'd'}, {'g', 'f'}, {'h', 'g'}, {'j', 'h'}, {'k', 'j'}, {'l', 'k'}, {';', 'l'}, {'x', 'z'}, {'c', 'x'}, {'v', 'c'}, {'b', 'v'}, {'n', 'b'}, {'m', 'n'}, {',', 'm'}, {'.', ','}, {'/', '.'}};
    map<char, char> L = {{'q', 'w'}, {'w', 'e'}, {'e', 'r'}, {'r', 't'}, {'t', 'y'}, {'y', 'u'}, {'u', 'i'}, {'i', 'o'}, {'o', 'p'}, {'a', 's'}, {'s', 'd'}, {'d', 'f'}, {'f', 'g'}, {'g', 'h'}, {'h', 'j'}, {'j', 'k'}, {'k', 'l'}, {'l', ';'}, {'z', 'x'}, {'x', 'c'}, {'c', 'v'}, {'v', 'b'}, {'b', 'n'}, {'n', 'm'}, {'m', ','}, {',', '.'}, {'.', '/'}};
	char c; cin >> c;
    string s; cin >> s;
	if (c == 'R') {
		for (unsigned int i = 0; i < s.size(); i++)
			s[i] = R[s[i]];
	}
	else {
		for (unsigned int i = 0; i < s.size(); i++)
			s[i] = L[s[i]];
	}
    cout << s;
	return 0;
}
