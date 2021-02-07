#include<simplecpp>

main_program{
//Write your code here
long long int a,n,k,f0=0,f1=1,f2;
cin>>n>>k;
if(n==1) cout<<f0%k;
else if(n>=2) cout<<f0%k<<endl<<f1%k<<endl;
for (a=2;a<n;a++)
{f2=(f0+f1)%k;
cout<<f2<<endl;
f0=f1;
f1=f2;}
}
