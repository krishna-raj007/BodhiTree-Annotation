#include<simplecpp>

main_program{

	int n;
	cin>>n;
	int a,b;
	cin>>a>>b;

	int max{a+b};
	if (n>2){
	repeat(n-2)
	{

	cin>>a;
	if(a+b>max)
	{
	max=a+b;
	}
	b=a;
	}
	}


	cout<<max;

















}
