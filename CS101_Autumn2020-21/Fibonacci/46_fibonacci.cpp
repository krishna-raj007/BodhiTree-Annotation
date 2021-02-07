#include<simplecpp>

main_program{
long long n,k;
cin>>n>>k;
long long t1=0, t2=1;
cout<<t1<<"\n";
for(int i=2;i<=n;i++)
{
cout<<t2%k<<"\n";
  long long x=t2;t2+=t1;t1=x;}}
