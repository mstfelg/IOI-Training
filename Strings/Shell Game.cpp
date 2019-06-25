// Shell game

#include <iostream>
#include <sstream>

using namespace std;

void swap(int &a, int &b) {
  a += b;
  b = a - b;
  a = a - b;
}

int main() {
  string str;
  cin >> str;
  int p1 = 1, p2 = 0, p3 = 0;        // declaring initial positions

  for (int i = 0; i < str.size(); i++) {
      if      (str[i] == 'A')   swap(p1, p2);
      else if (str[i] == 'B')   swap(p2, p3);
      else                      swap(p3, p1);
    }

  if      (p1 == 1) cout << "1";
  else if (p2 == 1) cout << "2";     // determining position 
  else              cout << "3";

  return 0;
}
