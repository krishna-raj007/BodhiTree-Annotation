#include<simplecpp>

main_program
{
 int f0,f1,f,i,n,k;

 cin>>n>>k;
 f0=0;
 f1=1;
 cout<<f0<<endl<<f1<<endl;

 for(i=2;i<n;i++)
 {f=(f0+f1)%k;
 cout<<f<<endl;
 f0=f1;
 f1=f;
 }}
