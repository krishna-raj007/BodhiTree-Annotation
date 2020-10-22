#include<simplecpp>

main_program{

  long n,m;
  cin >> n >> m;
  long x;
  long y;
  y = n;
  repeat(n-1){
    x = y % m ;
    n = n - 1 ;
    y = x*n;

  }
  cout << y;

}
