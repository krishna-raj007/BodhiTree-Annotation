#include<simplecpp>

main_program{
 unsigned long long n,k,a=0,b=1,m;
 cin>>n>>k;
 cout<<a%k<<endl;
 cout<<b%k<<endl;
 for (unsigned long long i=1;i<=(n-2);i++){
  m=(a%k+b%k)%k;
  a=b%k;
  b=m%k;
  cout<<m%k<<endl;
  }
}
