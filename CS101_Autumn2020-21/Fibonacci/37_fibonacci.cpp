#include<simplecpp>

main_program{
 long long n,k;

 cin>>n; cin>>k;
 long long  Fn1=0;
 long long  Fn2=1;
 long long  Fn3;
 cout<<Fn1%k<<endl;
 cout<<Fn2%k<<endl;
 for(long long i=1;i<=n-2;i=i+1){
 Fn3=Fn2+Fn1;
 Fn1=Fn2;Fn2=Fn3;
 long long x=Fn3%k;
 cout<<x<<endl;
 }}
