/*
##  Program by Varad Mahashabde
##
##  Print the first n Fibonaaci numbers, modulo given base
*/
#include <iostream>
using namespace std;

int main() {
  unsigned long long int f_0 = 0, f_1 = 1;
  unsigned long long int n, mod_base;
  // Working variables
  int f_n, f_n1, f_n2;

  cin >> n >> mod_base;

  // Load initial values
  f_n1 = f_1 % mod_base; f_n2 = f_0 % mod_base;

  if (n >= 1) cout << f_n2 << '\n';
  if (n >= 2) cout << f_n1 << '\n';
  for (; n > 2; --n) {
    f_n = f_n1 + f_n2;
    f_n %= mod_base;

    f_n2 = f_n1;
    f_n1 = f_n;

    cout << f_n << '\n';
  }

  return 0;
}
