#include<simplecpp>

main_program{
  long unsigned int n, k, a, b, c ;
  cin >> n >> k ;
  a = 0 ; b = 1 ;
  if(n ==1)
    cout << a%k ;
  else{
    cout << a%k << endl << b%k << endl ;
    repeat(n-2) {
      c = a + b ;
     cout << c%k << endl ;
     a = b ;
     b = c ;
     }
    }
}
