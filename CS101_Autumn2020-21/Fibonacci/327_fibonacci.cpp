#include<simplecpp>
main_program
	{
		long long int i,n,k,f0=0,f1=1,f;
		cin>>n>>k;
		cout<<f0%k<<endl;
		cout<<f1%k<<endl;
		for(i=2;i<=n-1;i++)
		{
			f=(f0+f1)%k;
			f0=f1;
			f1=f;
			cout<<f<<endl;
		}
	}
