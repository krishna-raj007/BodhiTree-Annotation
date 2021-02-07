#include <simplecpp>
main_program
{
int n, k;
cin >> n >> k;
int fn1 = 1 % k, fn2 = 0 % k, fnew;
cout << fn2  << endl << fn1  << endl;
for( int i = 1; i <= n - 2; i++)  {
   int fnew = (fn1 + fn2) % k;
   cout << fnew  << endl;
   fn2 = fn1;
   fn1 = fnew;

 }

}
