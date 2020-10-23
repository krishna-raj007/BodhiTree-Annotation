#include<simplecpp>

main_program{
 long long int n;
 long int x = 0;
 long long int fib = 1,y = 1;
 cin>>n;
 if(n<0)
  cout<<"-1";
 else if(n == 0)
  cout<<x;
 else if(n == 1)
  cout<<x + 1;
 else {
  x = 2;
  while(fib<n){
   long long int t = y;
   y = fib;
   fib = fib + t;
   x++;
  }
  if(fib == n)
   cout<<x;
  else
   cout<<"-1";
 }
}
