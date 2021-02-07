#include<simplecpp>
main_program{
  long long n,k,i;
  long long f1=0,f2=1,f3;
  cin>>n>>k;
  if(n==1) cout<<f1;
  if(n>=2) cout<<f1<<endl<<f2<<endl;

  for (i=2;i<n;i++){
  f3=(f1+f2)%k;
  cout<<f3<<endl;
  f1=f2;
  f2=f3;}}
