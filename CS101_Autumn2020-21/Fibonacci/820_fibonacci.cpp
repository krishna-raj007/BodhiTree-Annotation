#include<simplecpp>

main_program{
  int n,k;
  long int x,y;
  long int fib;
  cin>>n>>k;
  x=0;
  y=1;
  if (n==1){ cout<<x;}
  else if (n==2){
    cout<<x<<endl;
    cout<<y<<endl;

  }
  else{
    cout<<x<<endl;
    cout<<y<<endl;
    fib=x+y;
    repeat(n-2){
    cout<<fib%k<<endl;
    x=y;
    y=fib;
    fib=x+y;




  }
  }
}
