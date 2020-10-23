#include<simplecpp>

main_program{

	int n,a,b;
	cin>>n;
	int sum,nexta,nextb;
	cin>>a>>b;
	sum=a+b;
	repeat(n-2)
	{int num;
	cin>>num;
	if(sum<=(num+b))
	{sum=num+b;}
	nexta=b;
	nextb=num;
	a=nexta;
	b=nextb;
	}
	cout<<sum;

}
