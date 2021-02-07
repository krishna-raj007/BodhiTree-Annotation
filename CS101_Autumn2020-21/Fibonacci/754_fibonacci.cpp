#include<simplecpp>

main_program{
long int n ,k,a=0,b=1,c,i,x;
cin>>n>>k;

cout<<a<<endl<<b<<endl;
for(i=1; i<=n-2; i++)
{
c=a+b;
x=c%k;
cout<<x<<endl;
a=b%k;
b=c%k;

 }



}
