#include<simplecpp>
main_program{
long long int n,k,f0=0,f1=1,f2;

cin>>n>>k;
cout<<f0%k<<endl<<f1%k<<endl;
repeat(n-2)
{
f2=f0+f1;
f2=f2%k;
cout<<f2<<endl;
f0=f1;
f1=f2;
}
}
