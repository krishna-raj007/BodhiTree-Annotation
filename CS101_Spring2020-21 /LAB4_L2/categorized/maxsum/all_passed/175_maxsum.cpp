#include<simplecpp>

main_program{
int a,b,c=0,d,p=0,n;
cin>>n;
cin>>a;
repeat(n-1)
  {d=c;
  cin>>b;
  c=a+b;
  a=b;
if(c>d&&c>p)
{p=c;}
else if(d>=c&&d>p)
p=d;
else
p=p;
}
cout<<p;


	//Write your code here

}
