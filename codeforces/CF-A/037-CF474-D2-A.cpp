/*
Title		:	A. Keyboard
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-25
Description	:	A solution to: https://codeforces.com/contest/474/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    // ifstream cin("input.txt");
    char c; cin >> c;
    map<char, char> R = {{'q', 'w'}, {'w', 'e'}, {'e', 'r'}, {'r', 't'}, {'t', 'y'}, {'y', 'u'}, {'i', 'o'}, {'o', 'p'}, {'a', 's'}, {'s', 'd'}, {'d', 'f'}, {'f', 'g'},{'g', 'h'}, {'h', 'j'}, {'j', 'k'}, {'k', 'l'}, {'l', ';'}, {'z', 'x'}, {'x', 'c'}, {'c', 'v'}, {'v', 'b'}, {'b', 'n'}, {'n', 'm'}, {'m', ','}, {',', '.'}, {'.', '/'}};
    map<char, char> L = {{'p', 'o'}, {'o', 'i'}, {'i', 'u'}, {'u', 'y'}, {'y', 't'}, {'t', 'r'}, {'r', 'e'}, {'e', 'w'}, {'w', 'q'}, {';', 'l'}, {'l', 'k'}, {'k', 'j'}, {'j', 'h'}, {'h', 'g'}, {'g', 'f'}, {'f', 'd'}, {'d', 's'}, {'s', 'a'}, {'/', '.'}, {'.', ','}, {',', 'm'}, {'m', 'n'}, {'n', 'b'}, {'v', 'c'}, {'c', 'x'}, {'x', 'z'}};
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (c=='R')
            s[i] = R[s[i]];
        else
            s[i] = L[s[i]];
    }
    cout << s;
    return 0;
}