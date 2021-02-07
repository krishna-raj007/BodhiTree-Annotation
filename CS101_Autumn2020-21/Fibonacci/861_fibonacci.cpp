#include<simplecpp>

main_program{
long long int n,k,f0 = 0, f1 = 1,a,b,c,d; a = f1; b = f0;
cin >> n >> k; cout << f0%k << endl << f1%k << endl;

repeat(n/2 -1){
          c = (a + b)%k; a = c; b = a;
          d = (a + b)%k; a = d; b = c;
          cout << c%k << endl << d%k << endl;
          }
}
