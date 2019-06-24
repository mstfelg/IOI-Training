#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// A solution to https://codeforces.com/problemset/problem/1185/B


void insert(string str, vector<pair<char, int>> &a) {             // a function converts a string to pairs of chars with # of appearances
  int n = str.size();
  for (int i = 0; i < n - 1; i++) {
      int count = 1;
      for (int j = 1; str[i] == str[i+j]; j++) count++;            // counting frequency of a character
      a.push_back({str[i], count});                                // pushing it into a pair to the vector
    }
}

int main() {
  vector<pair<char,int>> x;
  vector<pair<char,int>> y;
  string str1, str2;
  cin >> str1 >> str2;
  int n = x.size();
  insert(str1, x);
  insert(str2, y);
  bool flag = 1;

  for (int i = 0; i < n && flag; i++)
      flag &= (x[i].first == y[i].first)&&(x[i].second <= y[i].second);
  flag?cout<<"YES":cout<<"NO";
  return 0;
}
