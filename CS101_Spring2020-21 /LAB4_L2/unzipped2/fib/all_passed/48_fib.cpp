#include<simplecpp>
main_program{
long long int n=0,a=0,b=1,sum=0,i=0;
cin>>n;
while(n>a)
{
if(n==a)
{
cout<<i;
break;
}
i++;
sum=a+b;
a=b;
b=sum;
}
if(a>n)
cout<<-1;
else
    cout<<0;

}
