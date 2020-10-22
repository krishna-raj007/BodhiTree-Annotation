#include<simplecpp>

main_program{
float a,b,c,n,m,x,y;
cin>>n;
repeat(n)
{x=0.00;
cin>>m;
repeat(m){
cin>>a;
cin>>b;
y=a-b;
x=y*y+x;
c=sqrt(x);
}
printf("%.2f\n",c);
}
}
