#include<simplecpp>

main_program{
int n,p;
float a,b,s,d;
cin>>p;
repeat(p){
{

cin>>n;
d=0;
repeat(n)
{
cin>>a;
cin>>b;
s=(a-b)*(a-b);
d=s+d;
}
printf("%.2f",sqrt(d));
}
}
}
