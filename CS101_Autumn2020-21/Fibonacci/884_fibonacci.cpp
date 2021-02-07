#include<simplecpp>

main_program{
long long unsigned int n,k,f0=0,f1=1,f2;
cin>>n>>k;
cout<<f0<<endl<<f1<<endl;
for(int i=0;i<n-2;i++){
  f2=f1+f0;
  f0=f1;
  f1=f2;
  f2=f2%k;
  cout<<f2<<endl;
  }
}
