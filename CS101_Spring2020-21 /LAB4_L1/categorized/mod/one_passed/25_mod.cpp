#include<simplecpp>

main_program{

	int k=1,fac=1,ans;
	long int n,m;
	cin>>n>>m;
	repeat(n){
	  fac=fac*k;
	  k=k+1;
    }
	ans=fac%m;
	cout<<ans;

}
