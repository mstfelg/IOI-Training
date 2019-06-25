// GCD algorithm using recursion
int gcd(int a, int b) {
  return a == b ? a : (a>b ? gcd (a - b, b) : gcd(a, b - a));
}
