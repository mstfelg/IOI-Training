// A program to sort numbers entered by user into a vector.

#include <iostream>
#include <sstream>
#include <math.h>
#include <vector>
using namespace std;

    // A program to count frequency of charactars
int main() {
  string str;
  char check_char;
  int count = 0;

  cout << "Enter a text: ";
  getline(cin, str);

  cout << "Enter a charactar to check: ";
  cin >> check_char;

    for (int i = 0; i < str.size(); i++) {
      if ( check_char == str[i] ) count++;
    }
    cout << count;
  return 0;
}



