#include<simplecpp>
main_program{
  int n, k;
  cin>>n>>k;
  int ai1=0, ai2=1, ai3;
  cout<<ai1%k<<endl<<ai2%k<<endl;
  if ( n>=1 && n<=100000 && k>1 && k<=100000 )
  repeat(n-2){
  ai3=(ai2+ai1)%k;
  cout<<ai3%k<<endl;
  ai1=ai2;
  ai2=ai3;
  }
  }
