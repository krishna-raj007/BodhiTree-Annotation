#include<simplecpp>

main_program{
int n;
double x,y,answer;
answer=4.0;
x=-1.0;
y=(1.0)/3.0;
cin>>n;
repeat(n)
{
answer=answer+4.0*1.0*x*y;
x=x*(-1)*1.0;
y=(y*1.0)/((2*y)+1);
}
cout<<answer<<endl;
}
