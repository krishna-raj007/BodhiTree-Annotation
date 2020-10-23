#include<simplecpp>

main_program{

  double s=0,r=1,n,a;
  cin>>n;
  repeat(n){
  a=(pow(-1,r))*1/(2*r+1);
  r++;
  s=s+a;
  }
  cout<<4*(1+s);


}
