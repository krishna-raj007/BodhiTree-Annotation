#include<simplecpp>
main_program{
int n,k,a=0,b=1;
cin>>n>>k;
cout<<0<<"\n"<<1<<"\n";
repeat(n-2){int m,r;
m=a+b; r=m%k;
a=b;b=r; cout<<r<<"\n";}}
