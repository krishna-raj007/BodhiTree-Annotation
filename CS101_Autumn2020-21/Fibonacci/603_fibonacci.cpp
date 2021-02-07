#include<simplecpp>
main_program{
  int n, t=0,next, t1=1,i;
  cin>>n;
  for(i=1;i<=n;i++){
  cout<<t<<endl;
  next=t+t1;
  t=t1;
  t1=next;
  }
  cout<<"Fibonacci series="<<t<<t1;
  }
