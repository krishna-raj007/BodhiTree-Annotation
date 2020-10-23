#include<simplecpp>

main_program{
 int k;
 cin>>k;
 double sum=1;
 int n=1;
  repeat(k)
   {
    sum=sum+(pow(-1,n))/(2*n+1);
    n=n+1;
   }
  cout<<4*sum;
}
