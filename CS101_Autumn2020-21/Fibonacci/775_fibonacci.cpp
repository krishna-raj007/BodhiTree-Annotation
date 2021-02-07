#include<simplecpp>

main_program{
long long unsigned int k,n;
cin >>n>>k;
long f0=0, f1=1,f2;
cout<<f0%k<<endl;
if(n!=1)
cout<<f1%k<<endl;
//cout<<k<<" "<<n;
for(long i=0;i<(n-2);i++)
{f2=f0+f1;
cout <<(f2%k)<<endl;
f0=f1;
f1=f2;
}
}
