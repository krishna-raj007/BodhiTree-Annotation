#include<simplecpp>

main_program{
long long int n,k,f1=0,f2=1,f3;
cin>>n>>k;
if(n>=1)cout<<0<<endl;
if(n>=2)cout<<1<<endl;
for(long long int i=3;i<=n;i++)
{f3=(f2+f1)%k;
cout<<f3<<endl;
 f1=f2;
 f2=f3;}
}

