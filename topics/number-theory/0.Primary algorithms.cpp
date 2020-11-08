/*
    Title           :   Arithmitic algorithms & Primary algorithms in Number Theory
    Author          :   ALELQ, MUSTAFA
    Date            :   23 June, 2019
    Description     :   GCD(a, b), isPrime(p)
*/

// GCD algorithm using recursion
int gcd(int a, int b) {
  return a == b ? a : (a>b ? gcd (a % b, b) : gcd(a, b % a));
}

// Checking whether n is a prime or not
bool isPrime(int p) {
	if (p == 1) return 0;
    for (int i = 2; i*i < p; ++i)
		if (p % i == 0) return 0;
    return 1;
}
