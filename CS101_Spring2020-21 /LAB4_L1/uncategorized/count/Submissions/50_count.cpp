#include<simplecpp>

main_program{
int a,b,c=0,d,n;
cin>>n;
while(n)
{
cin>>a>>b;
c=c+(a-b)*(a-b);
}
d=sqrt(c);
printf(“%.2f\n”,d);
}
