#include<simplecpp>

main_program{
long int i,n,k,a=0,b=1,m,c;
cin>>n>>k;
cout<<"0";
for(i=2;i<=n;i++){
  m=b%k;
  c=b;
  b=(b%k)+(a%k);
  a=c;
  cout<<"\n"<<m;
  }

}
