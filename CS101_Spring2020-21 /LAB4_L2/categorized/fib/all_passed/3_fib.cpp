#include<simplecpp>

main_program{
int n=0;
cin>>n;
int a=1;
int b=2;
int c=0;
int d=3;
int f=0;
if(n==1)
{cout<<"1";
exit(0);
}
else if(n==0)
{cout<<"0";
exit(0);
}
else if(n==2)
{cout<<"3";
exit(0);
}
for(int i=1;i<=n;i++)
{ c=a+b;
a=b;
b=c;
d=d+1;
if(c==n)
{cout<<d;
f=20;
break;
}
}
if(f==20)
{cout<<"";}
else
{cout<<"-1";}


}
