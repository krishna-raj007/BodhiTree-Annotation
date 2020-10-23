#include<simplecpp>

main_program{

	int n,max=0,sum;
	cin>>n;
	int a[n-1];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int k=0;k<n-1;k++)
	{
	sum=a[k]+a[k+1];
	if(sum>max)
	max=sum;
	}

	cout<<max;




}

