#include<simplecpp>

main_program{
//Pragyesh Gupta Fibonacci modulo k

int f1, f0 ,f,i , n , k , j;

f0 = 0 ;
f1 = 1 ;

cin>>n>>k ;

cout<<f0<<endl ;
cout<<(f1%k)<<endl ;

for(i = 1 ; i<n-1 ; i++)
{
  f = f0 + f1 ;
  j = f%k ;
  cout<<j<<endl ;
  f0 = f1 ;
  f1  = f ;
}

}




