#include<simplecpp>

main_program{
int i=1,n,m;
cin>>n>>m;
int nfac=1;
repeat(n){
nfac=nfac*i;
i=i+1;
nfac=nfac%m;
}
cout<<nfac%m;
}
