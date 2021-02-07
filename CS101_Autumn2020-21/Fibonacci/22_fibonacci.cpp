#include<simplecpp>
main_program{
long long unsigned int n,k,a=0,b=1,i,sum,c;
cin>>n>>k;
for(i=0;i<n;i++)
{
if(i<=1)sum=i;
else sum=a+b%k;
a=b;b=sum;
c=sum%k;
cout<<c<<endl;}
}
