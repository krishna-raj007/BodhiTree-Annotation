#include<simplecpp>

main_program{
//Write your code here
 unsigned long int a = 0 , b = 1 , n , k , r;
 cin >> n >> k;
 cout << a%k << "\n" << b%k << "\n";
 for (unsigned int i = 2 ; i < n ; ++i)
 {
  r = ((a%k)+(b%k))%k;
  cout << r << "\n";
  a = b;
  b = r;
 }

}
