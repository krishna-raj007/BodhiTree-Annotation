#include<simplecpp>

main_program{
long int n,k,t,x1=0,x2=1;  //x1,x2 are %
cin>>n>>k;
cout<<0<<endl<<1<<endl;
for(int i=2;i<n;i++)
{
t=x2;
x2=(x2+x1)%k;  //(a1+a2)%m=((a1%m)+(a2%m))%m
x1=t;
cout<<x2<<endl;
}
}
