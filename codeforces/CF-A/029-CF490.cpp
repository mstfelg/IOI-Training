/*
Title		:	A. Team Olympiad
Author	    :	ALELQ, MUSTAFA
Date        :	2020-07-17  
Description	:	A solution to: https://codeforces.com/contest/490/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  vector<int> t1, t2, t3; // Vectors of children positions based on their skills
  for (int i = 0; i < n; i++)
  {
    unsigned short a; cin >> a;
    if (a == 1) t1.push_back(i+1);
    else if (a == 2) t2.push_back(i+1);
    else t3.push_back(i+1);
  }
  int teams = min({t1.size(), t2.size(), t3.size()});
  cout << teams << endl;
  for (int i = 0; i < teams; i++)
  {
    cout << t1.at(i) << ' ' << t2.at(i) << ' ' << t3.at(i) << endl;
  }
  return 0;
}