#include<simplecpp>

main_program{
 int fib=0 , fib1=1 , n , k , x , y , sum=0;
 cin >> n>> k ;
 x = fib % k ;
 y = fib1 % k ;

 cout << x << endl;
 cout << y << endl;
 repeat(n-2){
 sum = (fib1 + fib)%k;
 cout << sum%k << endl;
 fib = fib1;
 fib1 = sum ;}

}