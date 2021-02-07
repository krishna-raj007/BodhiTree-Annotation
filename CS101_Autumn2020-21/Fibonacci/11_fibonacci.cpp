# include<simplecpp>

main_program
{
	long long n=0;
	long long  i=0;
	long long  a,b,c;
	long long  k=0;

	cin>>n>>k;

	a=0;
	b=1;
	cout<<a<<endl;
	cout<<b<<endl;

	while(i<n-2)
	{
		c=a+b;
		a=b;
		b=c;
		

		cout<<c%k<<endl;
		c=0;
		i++;

	}


}