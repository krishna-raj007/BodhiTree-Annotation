/* Program for Fibonacci
   Author : Mohit */

# include <simplecpp>

main_program{

  long unsigned int n ,k;
  cin >> n >> k ;
  cout << 0%k << "\n" << 1%k <<"\n";
  long unsigned int p=0 ,q=1 ;
  repeat(n-2){

    long unsigned int z;
    z=p+q ;
    cout << z%k <<"\n" ;
    p=q;
    q=z%k; }



}
