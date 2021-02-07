#include<simplecpp>
main_program{
int d,e,f;
cin>>d>>e;
int x=0,y=1,z;
for(f=0;f<d;f++)
{cout<<x%e<<endl;
z=x+y;
x=y;
y=z;
}
}
