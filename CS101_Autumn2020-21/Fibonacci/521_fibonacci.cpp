#include<simplecpp>

main_program{
//Write your code here

long long int n,k,t, a=0, b=1, i=1;

cin>>n>>k;
cout<<a%k<<endl<<b%k<<endl;

for( ; i<=n-2; i++)
{

t=a+b;
a=b%k;

b=t%k;

cout<<t%k<<endl;
}
}
