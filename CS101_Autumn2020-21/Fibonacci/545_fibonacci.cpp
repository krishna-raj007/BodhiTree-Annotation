#include<simplecpp>

main_program{
unsigned long int u,n,k,a,b,c;
a=1;
b=0;
cin>>n>>k;
cout<<b%k<<endl;
cout<<a%k<<endl;
repeat(n-2){
  c=a%k;
  a=(a%k)+(b%k);
  b=c;
  u=a%k;
  cout<<u<<endl;
  }


}
