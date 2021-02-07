#include<simplecpp>
main_program
{
long int f0=0,f1=1,f2,n,k;
cin>>n>>k;
if(n==1)
cout<<f0%k<<endl;
if(n>=2)
 {
    cout<<f0%k<<endl;
    cout<<f1%k<<endl;
 }
for(int i=3;i<=n;i++)
{
f2=f1%k+f0%k;
cout<<f2%k<<endl;
f0=f1;
f1=f2;
}
}
