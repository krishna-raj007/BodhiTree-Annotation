#include<simplecpp>

main_program{
 long long int n,k; cin>>n>>k;
 int f0=0,a=1,f=1,c=(f0+f)%k,b;cout<<f0%k<<endl<<f%k<<endl<<c%k<<endl;
 repeat(n-3){
  b=(c+a)%k;
  a=c;c=b;
  cout<<b<<endl;
 }
}
