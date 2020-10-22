#include<simplecpp>

main_program{
int q,n;
cin>>q;
repeat(2)
{
cin>>n;
int d=0;
float r;
repeat(n)
{
int a,b,c;
cin>>a>>b;
c=(a-b)*(a-b);
d=d+c;
}
r=sqrt(d);
printf("%.2f\n",r);
}
}
