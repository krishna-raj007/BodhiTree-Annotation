#include<simplecpp>
#include<iostream>

main_program{

int n,a=0,b=1,fib=0,i=1;

cin>>n;

if(n==1) cout<<i;

if(n==0) cout<<"0";


repeat(n)
{
  fib = a + b;

  a = b;

  b = fib;

  i++;

  if(n==fib)
  {
    cout<<i;
    break;
  }


}

if(n!=fib)
{
    cout<<"-1";
}



}
