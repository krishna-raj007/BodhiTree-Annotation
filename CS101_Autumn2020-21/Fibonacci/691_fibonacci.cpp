#include<simplecpp>

main_program{
//Write your code here

long long int n,k,t, t1=0, t2=1, i=1;

cin>>n>>k;
cout<<t1%k<<endl<<t2%k<<endl;

for( ; i<=n-2; i++)
{

t=t1+t2;
t1=t2%k;

t2=t%k;

cout<<t%k<<endl;
}
}
