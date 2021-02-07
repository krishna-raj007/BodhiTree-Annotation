#include<simplecpp>
main_program{
	int f0=0,f1=1,f2;
	long int n;
	cin>>n;
	cout<<f0<<endl<<f1<<endl;
	for(long int k=2;k<n;k++)
	{
	f2=f1+f0;
	cout<<f2<<endl;
	f0=f1;
	f1=f2;
	}
}
