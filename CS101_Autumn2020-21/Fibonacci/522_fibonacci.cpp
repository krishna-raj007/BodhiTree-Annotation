#include<simplecpp>

main_program{
//Write your code here
unsigned long int n,k,f0=0,f1=1,f2,ans;
cin>>n>>k;
cout<<f0%k<<endl;
cout<<f1%k<<endl;
for(int i=2;i<n;i++)
{
f2=f0+f1;
ans=f2%k;
f0=f1%k;
f1=f2%k;
cout<<ans<<"\n";
}
return 0;



}
