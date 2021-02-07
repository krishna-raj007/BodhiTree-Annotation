#include<simplecpp>

main_program{

	// To print n!%m
	long int n,m , fact , d;
	cin>>n>>m;
	fact=1;
	for(int i=1;i<=n;i++)
	{
	 fact*=i;
	 }
    d=fact%m;
    cout<<d;

}
