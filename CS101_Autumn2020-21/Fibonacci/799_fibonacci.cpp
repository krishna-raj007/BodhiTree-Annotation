#include<simplecpp>
main_program
{
long int n,k,i;
cin>>n>>k;
long int a=0,b=1,c;
cout<<a<<endl<<b<<endl;
for(i=1;i<n-1;i++)
{
c=(a+b)%k;
a=b;
b=c;
cout<<c<<endl;
}
}
