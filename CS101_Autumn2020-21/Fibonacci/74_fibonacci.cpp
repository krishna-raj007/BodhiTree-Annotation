#include<simplecpp>

main_program{
 int a=0 , b=1 , n , k ,r1 , r2 , s=0;
 cin >> n>> k ;
 r1 = a % k ;
 r2 = b % k ;

 cout << r1 << endl;
 cout << r2 << endl;
 repeat(n-2){
 s= (a + b)%k;
 cout << s% k << endl;
 a = b;
 b = s;}

}
