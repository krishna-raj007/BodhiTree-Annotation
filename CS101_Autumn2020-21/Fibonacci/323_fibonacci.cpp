#include <simplecpp>

main_program{

long int n, k, f1 = 0, f2 = 1, F;
cin >> n >> k;

if (n==1)

cout << f1;
else{
 cout << f1 << endl << f2 << endl;
 repeat(n-2)
 {
  F = f2;
  f2 +=f1;
  f1 = F%k;
  f2 = f2%k;
  cout << f2 << endl;
  }}
}
