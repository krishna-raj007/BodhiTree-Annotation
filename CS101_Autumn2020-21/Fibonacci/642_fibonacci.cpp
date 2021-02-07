
#include<simplecpp>
main_program{
  int n,k,f1=0,f2=1,f3;
  cin>>n>>k;
  cout<<f1%k<<endl;
  cout<<f2%k<<endl;
  repeat(n-2){
  f3=f1+f2;
  cout<<f3%k<<endl;
  f1=f2%k;
  f2=f3%k;
  }
 }


