#include<simplecpp>

main_program{
float a,b,x,n,m,y,c;

cin>>n;
repeat(n)
{y=0.00;
cin>>m;
    repeat(m)
{
    cin>>a;
    cin>>b;
    x=b-a;
    y=(x*x)+y;
    }
c=sqrt(y);

printf("%.2f\n",c);}
}
