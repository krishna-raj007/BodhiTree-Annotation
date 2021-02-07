#include<simplecpp>
main_program{

  long long int a,f,i,f1=0,f2=1,b;
  cin>>a;
  cin>>b;
  long long int r=0%b;
  long long int s=1%b;
  
  cout<<r<<endl<<s;
  
  for(i=2;i<a;i++){
  f=(f1+f2)%b;
  f1=f2;
  f2=f;
  cout<<"  \n"<<f;}}