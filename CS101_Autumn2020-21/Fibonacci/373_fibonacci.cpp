#include<simplecpp>

main_program
{
 //fibonacci

 long long int n , k ;
 cin >> n >> k ;
 long long a , a1=0 , a2=1 , i=1 ;


 cout << a1%k << endl << a2%k <<endl ;

 for( ; i<=n-2; i++)
 {

 a = a1+a2 ;
 a1 = a2%k ;
 a2 = a%k ;

 cout << a%k << endl ;
 }
}
