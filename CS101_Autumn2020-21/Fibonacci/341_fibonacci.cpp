#include<simplecpp>
main_program{
  int F0 = 0, F1 = 1, a;
  int n;

  int k;
  cin>>n>>k;
  int b;
  a = F0 + F1;
  cout<<F0<<endl<<F1<<endl;
  repeat(n-2){
  a += a;
  b=a%k;
  cout<<b<<endl;
  }




 }

