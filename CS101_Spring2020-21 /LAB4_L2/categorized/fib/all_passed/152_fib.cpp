#include<simplecpp>

main_program{
long int n, p=0, a=0, b=1, c=1;
cin>>n;
while (n!=a)
{
  a=b;
  b=c;
  c=a+b;
  p++;
  if (n<p)
  {
      p=-1;
      break;
  }
}
cout<<p;
}
