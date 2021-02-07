#include<simplecpp>

main_program{
//Write your code here
 int f,f0=0,f1=1,k,n;
 cin>>n>>k;
 cout<<f0%k<<endl;
 cout<<f1%k<<endl;
 for(int i=1; i<(n-1); i++){
  f = (f0+f1)%k;
  cout<<f%k<<endl;
  f0 = f1;
  f1 = f;
  }
}
