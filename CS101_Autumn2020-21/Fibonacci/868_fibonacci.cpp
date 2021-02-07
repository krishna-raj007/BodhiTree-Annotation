#include<simplecpp>
main_program{
 long long int i , n , k , t1 = 0 , t2 = 1 , nexterm ;
cin>> n >> k ;
for(i = 0 ; i<n ; i++)
{
cout<< t1%k << endl ;
nexterm = t1 + t2 ;
t1 = t2 ;
t2 = nexterm ;

}
}
