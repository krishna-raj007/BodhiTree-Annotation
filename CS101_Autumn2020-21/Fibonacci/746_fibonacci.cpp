#include<simplecpp>

main_program{
long long int n,k,f1,f2,f3;
f1=0;f2=1;
cin>>n>>k;cout<<endl;
cout<<f1%k<<endl<<f2%k<<endl;
for(int i=1;i<=n-2;i++)
{
   f3=f2+f1;
   f1=f2;
   f2=f3;
   cout<<f3%k;cout<<endl;}



}
