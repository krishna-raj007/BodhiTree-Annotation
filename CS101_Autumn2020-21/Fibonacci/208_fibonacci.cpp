#include<simplecpp>

main_program{
long long int n,k,p,t;
cin>> n>> k;
p=0;t=1;
cout<< p%k<<endl;
repeat(n-1){
  long long int pd=(p+t)%k;
  t=p%k;
  p=pd%k;
  cout<<pd%k<<endl;}
}
