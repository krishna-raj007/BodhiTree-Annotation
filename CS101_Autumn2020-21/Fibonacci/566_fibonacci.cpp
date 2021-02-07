#include<simplecpp>
main_program{
int p,q,i;
cin>>p>>q;
int c=0,b=1,a;
for(i=0;i<p;i++)
{cout<<c%q<<endl;
a=c+b;
c=b;
b=a;
}
}

