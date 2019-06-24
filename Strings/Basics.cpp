#include <iostream>
#include <sstream>
#include <math.h>
#include <vector>
using namespace std;

    // count frequency of charactars
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

// Reverse string letters

int main() {
  string str;
  getline(cin, str);
  int n = str.size();
      for (int i = 0; i <= n/2; i++) {
        int temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
      }
    cout << str << "\n";
  return 0;
}

