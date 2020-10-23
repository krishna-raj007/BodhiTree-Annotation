#include<simplecpp>
main_program{
int n,i;
double t,s;
cin>>n;
s=0;i=0;
repeat(n+1){t=pow(-1,i)*1/(2*i+1);
           s=s+t;i++;}
 cout<<4*s;
 }
