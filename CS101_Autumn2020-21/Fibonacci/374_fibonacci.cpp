#include<simplecpp>
main_program{
 int a=0,b=1,sum,lim,mod;
cin>>lim>>mod;
cout<<"0"<<endl;
cout<<"1"<<endl;
for(int i=1;i<=lim-2;i++)
{
sum=a+b;
cout<<sum%mod<<endl;
a=b%mod;
b=sum%mod;
}}
