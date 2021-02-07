#include<simplecpp>

main_program{
 int fib=0 , fib1=1 , n , k , t , u , sum=0;
 cin >> n>> k ;
 t = fib % k ;
 u = fib1 % k ;

 cout << t << endl;
 cout << u << endl;
 repeat(n-2){
 sum = (fib1 + fib)%k;
 cout << sum%k << endl;
 fib = fib1;
 fib1 = sum ;}

}
