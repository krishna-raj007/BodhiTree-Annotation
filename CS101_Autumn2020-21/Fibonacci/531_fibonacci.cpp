#include<simplecpp>
main_program{
int n,k,f0=0,f1=1,f2=2;
cin>>n>>k;
if(n==1)
{
cout<<"0";
}
if(n==2)
{
cout<<"0"<<endl;
cout<<f1%k<<endl;
}
if(n>=3)
{
cout<<"0"<<endl;
cout<<f1%k<<endl;
}
repeat(n-2)
{
f2=f0+f1;
cout<<f2%k<<endl;
f0=f1%k;
f1=f2%k;
}
}

