#include<simplecpp>
main_program{
int n;
cin>>n;
double a,p,m;
a=0.0;
repeat(n+1){
p=pow(-1,a);
m=m+p*1/(2*a+1);
a++;}
cout<<4*m;}
