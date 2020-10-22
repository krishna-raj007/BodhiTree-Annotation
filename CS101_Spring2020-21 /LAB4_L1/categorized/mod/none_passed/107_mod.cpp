#include<simplecpp>

main_program
{
int n,fac=1,i=1,m,y;
cin>>n;
repeat(n)
{
fac=fac*i;
i=i+1;
}
cout<<fac<<endl;
cin>>m;
y=fac%m;
cout<<y<<endl;
}
