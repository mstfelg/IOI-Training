/*
    Title           :   Basic string problems
    Author          :   ALELQ, MUSTAFA
    Date            :   24 June, 2019
    Description     :   Frequency of chars, reversing a string.
*/

// Count frequency of charactars
int charCount(string str, char checkChar) {
  int count = 0;
  for (int i = 0; i < str.size(); i++) if ( check_char == str[i] ) count++;
  return count;
}

// Reverse string letters
void rev(string str) {
  // Solution1
  for (int i = 0; i <= str.size()/2; i++) {
    int temp = str[i];
    str[i] = str[n-i-1];
    str[n-i-1] = temp;
    }
  // Solution2
  string strTemp = "";
  for (int i = 1; i < str.size; i++) strTemp += str[n-i];
    str = strTemp;
}
