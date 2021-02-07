#include<simplecpp>
main_program{
long long int n,k,a0=0,a1=1,a,a2;
cin>>n>>k;
cout<<a0%k<<endl<<a1%k<<endl;
for(a=2;a<n;a++)
{
a2=(a1+a0)%k;
cout<<a2<<endl;
a0=a1;
a1=a2;
}
}
