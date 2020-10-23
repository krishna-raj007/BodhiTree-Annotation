#include<simplecpp>

main_program{
 long long int n,sum,a,b,maximum ;
 cin >> n ;
 cin >> a ;
 maximum=0;

 repeat(n-1){
 cin >> b;
 sum = a+b ;
 maximum=max(maximum,sum);
 a=b;

 }
 cout << maximum ;




}
