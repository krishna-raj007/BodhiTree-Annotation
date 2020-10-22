#include<simplecpp>

main_program{

	long int n,m,i=1;

    cin>>n>>m;
	repeat(n-1){

	n=n*i;
	i=i+1;
	}
	n%m;
	cout<<n%m<<endl;


}
