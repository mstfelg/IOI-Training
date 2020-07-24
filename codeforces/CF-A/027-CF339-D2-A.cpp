/*
Title		:	A. Helpful Maths
Author		:	ALELQ, MUSTAFA
Date		:	2019-06-24
Description	:	A solution to: https://codeforces.com/contest/339/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string str;
  int one = 0;
  int two = 0;
  int three = 0;
  cin >> str;
  int n = str.size();
  for (int i = 0; i < n ; i += 2) {
    if (str[i] == '1') {one++;}
    else if (str[i] == '2') {two++;}
    else if (str[i] == '3') {three++;}
  }
 
  for (int i = 0; i < one; i++) {
        if (i == one - 1 && two == 0 && three == 0) cout << "1";
    else cout << "1+";
  }
  for (int i = 0; i < two; i++) {
        if (i == two - 1 && three == 0) cout << "2";
    else cout << "2+";
  }
  for (int i = 0; i < three; i++) {
    if (i == three - 1) cout << "3";
    else cout << "3+";
  }
  
  return 0;
}