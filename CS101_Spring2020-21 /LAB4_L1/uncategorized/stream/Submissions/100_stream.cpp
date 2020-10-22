#include<simplecpp>

main_program{

	int n=1;
	int m=1;
	int k=1;
	while(k>0)
	{
	if(n<=0)
	{
        k=0;
	}
	else
	{
	cin>>n;
	m=max(m,n);
	}
	}
	cout<<m;

}
