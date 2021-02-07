#include <simplecpp>
main_program{
  long long int  b=1, c=2, n ,k, t1, t2, t3 ;
  cin >> n >> k ;
  t1=b%k ; t2 =c%k ;
  cout << "0" <<endl << "1" << endl << "1" << endl << 2%k << endl ;
  repeat(n-4){
     t3=(t2+t1)%k ;
     cout << t3 << endl ;
     t1=t2 ;
     t2= t3 ;
     }}
