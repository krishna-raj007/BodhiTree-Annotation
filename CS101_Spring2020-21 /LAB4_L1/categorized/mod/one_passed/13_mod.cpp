#include<simplecpp>

main_program{

	int n,m,k,nfac=1,i=1;
	cin>>n;
	cin>>m;
	repeat(n){
	       nfac=nfac*i;
	       i=i+1;
	           }

	 k=nfac%m  ;
	 cout<<k<<endl;

              }
