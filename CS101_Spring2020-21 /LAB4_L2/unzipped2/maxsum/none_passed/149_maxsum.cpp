#include<simplecpp>

main_program{
cout<<"enter the no. of number";
int n;
cin>>n;
int x,y,z,k,m=0,l,o=0;
cin>>x;
cin>>y;
k=x+y;
repeat(n-2)
{
cin>>z;
l=y+z;
m=max(k,l);
y=z;
o=max(o,m);
}
cout<<o;
}
