#include<simplecpp>

main_program{
int a0=0,a1=1;
long long unsigned int n,k,c;
cin>>n>>k;
if(k>1)
{
c=a0+a1;
cout<<a0%k<<endl<<a1%k;
n=n-2;
while((n>0))
{
cout<<endl<<c;
a0=a1;
a1=c;
c=(a0%k+a1%k)%k;
n--;
}
}
}
