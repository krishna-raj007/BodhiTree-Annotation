#include<simplecpp>

main_program{
 int f0=0 , f1=1 , n , k ,r1 , r2 , sum=0;
 cin >> n>> k ;
 r1 = f0 % k ;
 r2 = f1 % k ;

 cout << r1 << endl;
 cout << r2 << endl;   
 repeat(n-2){
 sum = (f1 + f0)%k;
 cout << sum% k << endl;
 f0 = f1;
 f1 = sum ;}     /* this gives us the Fibonacci sequence */

}