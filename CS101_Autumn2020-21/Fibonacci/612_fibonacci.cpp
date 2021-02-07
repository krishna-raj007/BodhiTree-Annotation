#include<simplecpp>

main_program{
unsigned long int n,k;
cin>>n;cin>>k;
unsigned long int a=0,b=1,nextterm;
for(unsigned long int i=1;i<=n;i++)
{
cout<<a%k<<endl;
nextterm=a+b;
a=b;
b=nextterm;
}
}
