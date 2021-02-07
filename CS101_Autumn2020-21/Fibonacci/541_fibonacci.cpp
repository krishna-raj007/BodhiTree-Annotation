#include<simplecpp>

main_program{
long long int f0,f1,f2=1,nextf0,nextf1,rf0,rf1,k,i=2,n;
f0=0;f1=1;
cin>>n>>k;
cout<<(f0 % k)<<endl<<(f1 % k)<<endl;
while(i<=(n-1)){

  f2=f1+f0;
  rf0=f0%k;
  rf1=f1%k;
  nextf0=f1;
  nextf1=f2;
  f0=nextf0;
  f1=nextf1;
  i=i+1;
  long long int m= (rf0 + rf1)%k;
  rf1=m;
  rf0=rf1;
  cout<<m<<endl;
;}
}
