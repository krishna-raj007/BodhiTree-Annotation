#include<simplecpp>

main_program{

	//Write your code here
int n,fib=1,a,b,c=-2,i;
a=0;
b=1;
cin>>n;
for(i=1;i<=n;i++)
{

    fib=fib+a;
    a=b;
    b=fib;
if(fib==n)
      {
          c=i; break;
}
}
if(n==0)
    c=-1;
if(n==1)
    c=0;
cout<<c+1;
}

