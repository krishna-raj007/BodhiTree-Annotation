#include<simplecpp>

main_program{
int n,k;
cin>>n>>k;
int a=0,b=1;
cout<<a<<endl<<b<<endl;
repeat(n-2)
{ cout<<(a+b)%k<<endl;
  int m=a;
  a=b;
  b=(b+m)%k;
}
}
