#include<simplecpp>

main_program{
//Write your code here
long int k,f0=0,f1=1,f2;
double n;
cin>>n>>k;
cout<<"\n"<<f0%k<<"\n"<<f1%k;
for(double i=2;i<n;i++)
{
 f2=(f1%k+f0%k)%k;

 cout<<"\n"<<f2;

 f0=f1%k;
 f1=f2;
}
}
