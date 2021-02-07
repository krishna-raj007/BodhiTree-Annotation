#include<simplecpp>

main_program{

 long long int r1=0, r2=1, r3, n, k;
 cin >> n >> k;

 cout << r1%k << endl << r2%k << endl;

 repeat(n-2)
 {
  r3 = ((r2%k)+(r1%k))%k;
  cout << r3 << endl;
  r1 = r2;
  r2 = r3;
 }

}
