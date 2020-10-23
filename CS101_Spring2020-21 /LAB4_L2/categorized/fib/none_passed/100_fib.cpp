#include<simplecpp>

main_program{
int n,i=1;
cin>>n;
if(n<0)
cout<<-1;
else
{


int a=0,sum=0;
 int b=1;
while(sum!=n)
{sum=a+b;
a=b;
b=sum;
i=i+1;}
if(sum==1)
    cout<<1;
else
cout<<i;
}
}
