#include<simplecpp>

main_program{

	long int n,m,f=1;
	cin>>n>>m;
	while(n!=0)

	{
	  f=f*n;
       f=f%m;
	  n--;
	}
	cout<<f;

}
