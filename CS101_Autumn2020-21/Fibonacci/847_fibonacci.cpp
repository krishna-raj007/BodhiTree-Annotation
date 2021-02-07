#include<simplecpp>

main_program{
//Write your code here
int n,k,k1=0,k2=1,nextTerm=0;
cin>>n>>k;
for (int i=1;i<=n;i++)
{
if(i==1)
{ cout<<k1%k<<endl;continue;}

if (i==2)
{cout <<k2%k<<endl;continue;
}
nextTerm=(k1+k2)%k;
k1=k2;
k2=nextTerm;
nextTerm=nextTerm;
cout<<nextTerm<<endl;
}
return 0;
}
