#include<simplecpp>

main_program{
  long long int n,k,f0=0,f1=1,f;
  cin>>n;cin>>k;
  if((n>=1)&&(n<=100000))
  if((k>1)&&(k<=100000))
  cout<<"0"<<endl;
  cout<<f1%k<<endl;
  for(double i=3;i<=n;i++){
  f=f0+f1;
  cout<<f%k<<endl;
  f0=f1;
  f1=f;}
  }
