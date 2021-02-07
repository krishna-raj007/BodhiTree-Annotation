#include<simplecpp>

main_program
{
	long long int n,k,x;
	cin>>n>>k;
	long long int a=0,b=1,c;
	cout<<endl<<a<<endl<<b<<endl;
	repeat(n-2)
	{
		c=a+b;x=(a%k+b%k)%k;
		cout<<x<<endl;
		a=b;b=c;
	}

}