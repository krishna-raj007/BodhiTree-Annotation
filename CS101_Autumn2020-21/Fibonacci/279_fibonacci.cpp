#include<simplecpp>
main_program
{
	int n1=0, n2=1, k=0, m=0,n=0;
	cin>>n>>k;
	cout<<endl<<(n1%k);
	if(n>1)
	{
		cout<<endl<<(n2%k)<<endl;
	}
	if(n>2)
	{

		for(int i=2;i<n;i++)
		{
			m=((n1%k)+(n2%k))%k;
			cout<<m<<endl;
			n1=n2;
			n2=m;
		}
	}
}