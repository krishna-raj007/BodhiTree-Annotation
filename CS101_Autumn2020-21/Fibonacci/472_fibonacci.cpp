#include<simplecpp>

main_program
//Write your code here
{
long long int n,k,t1=0,t2=1,sum=1;


cin>>n >>k;
cout<<t1 <<endl;
for(int i=1;i<=n-1;i++)
{
cout<<(t2) <<endl;
t1=t2%k;
t2=sum%k;
sum=t1+t2;
}
}
