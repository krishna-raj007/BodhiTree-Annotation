#include<simplecpp>

main_program{
long int n,m;
cin>>n>>m;
long int t=1,x=n,a;
repeat(n)
{
   t=t*(x%m);
   x=x-1;
}
a=t%m;
cout<<a;
}
