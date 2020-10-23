#include<simplecpp>
main_program
{
 long int n,a=0;
 double result,p,sum=0;
 cin>>n;
 repeat(n+1)
 {
     p=pow(-1,a);
  sum=sum+(p/(2*a+1));
a++;

 }
 result=sum*4;
 cout<<result;



}
