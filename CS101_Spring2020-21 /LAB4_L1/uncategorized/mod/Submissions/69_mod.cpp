#include<simplecpp>

main_program{
long int n,m;
cin>>n>>m;
long int i=1,nfac=1;
repeat(n){
  nfac=((i%m)*nfac)%m;
  i=i+1;
  }
cout<<nfac;
}
