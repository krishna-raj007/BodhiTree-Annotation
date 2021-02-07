#include<simplecpp>

main_program
{
long int n,k,x1=0,x2=1,r;
cin>>n>>k;
if (n==1)
cout<<x1;
else
{
cout<<x1<<endl;
cout<<x2<<endl;
repeat(n-2)
{
r=x2;
x2+=x1;
x1=r%k;
x2=x2%k;
cout<<x2<<endl;
}
}
}
