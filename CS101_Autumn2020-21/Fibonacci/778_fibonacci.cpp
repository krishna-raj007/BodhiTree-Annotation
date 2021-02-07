#include<simplecpp>
main_program
{initCanvas();
int f0=0,f1=1;
double n;
int k;
cin>>n>>k;
cout<<0%k<<endl;
cout<<1%k<<endl;
repeat(n-2)
{
int x=f0+f1;
cout<<x%k<<endl;
f0=f1;
f1=x;
}
}
