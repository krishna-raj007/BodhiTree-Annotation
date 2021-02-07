#include<simplecpp>

main_program{
  int a=0, b=1, n, k, c;
  cin >> n >> k;
  cout << a << endl << b << endl;
  repeat(n-2){
     c=(a+b)%k;
     cout << c<< endl;
     a=b;
     b=c;
     }
}
