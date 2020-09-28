#include<simplecpp>

main_program{

	long n,m,x;
	cin>>n;
	cin>>m;
	x=1;
	repeat(n)
	{x=((n%m)*x%m)%m;
	n=(n-1);}
cout<<x%m;



}
