#include<simplecpp>

main_program{
unsigned long n,k,f0,f1,x;
f0=0;
f1=1;
cin>>n>>k;
cout<<f0%k<<"\n";
cout<<f1%k<<"\n";
for(int i=2; i<n; i++)
{ x= f0+f1;
 cout<< x%k<<"\n";
f0=f1;
f1=x;
 }





}
