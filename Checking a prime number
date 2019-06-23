#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

int main() {
   for (int p = 2; p < 101; p++) {
     cout << p << " - ";
     bool flag = 1;
    for (int i = 2; i*i <= p; i++) flag &= (p % i != 0);
    cout << (flag? "prime\n" : "composite\n");
    }
  return 0;
}
