#include<simplecpp>

main_program{
 long long n, a , b , c , x , y ;
 cin>>n>>x;
 a=0 , b=1 ;
 cout<<a%x<<endl<<b%x;
 repeat(n-2){
  c = a + b ;
  y=c%x;
  cout<<"\n"<<y;
  a = b;
  b = y;
 }
}
