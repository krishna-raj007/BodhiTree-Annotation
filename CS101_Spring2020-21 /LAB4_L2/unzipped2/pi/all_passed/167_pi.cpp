#include<simplecpp>

main_program{

	int n;
	float val=0;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
	val=val+4*pow(-1,i)/(2*i+1);
	}
cout<<val;
}

