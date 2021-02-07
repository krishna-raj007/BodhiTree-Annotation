#include<simplecpp>

main_program
{
int n,k;
cin>>n>>k;
int a=0,b=1,c;
cout<<a%k<<endl<<b%k<<endl;
if(n>1)
{
repeat(n-2)
{
c=a+b;
cout<<c%k<<endl;
a=b;
b=c;
}
}
}
