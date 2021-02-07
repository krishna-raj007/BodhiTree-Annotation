#include<simplecpp>

main_program{
//Write your code here

  int n , k , f0 = 0 , f1 = 1 , f2 ;
  cin >> n >> k ;
  cout << f0 % k << endl ;
  if ( n > 1 )
  {
  cout<<f1%k<<endl;
  if ( n > 2 )
  {
  for ( int i = 0; i < n - 2 ; i++)
    {
    f2 = ((f0%k) + (f1%k))%k ;
    cout<<f2<<endl;
    f0 = f1 ;
    f1 = f2 ;
    }

 }

 }


}
