#include<simplecpp>

main_program{

	int n,a,b,sum, nexta, nextb;
	cin>>n;
	cin>>a>>b;
	sum=a+b;
	repeat(n-2)
	{
	   int num;
	   cin>>num;
	   if ((sum)<=(num+b))
	{
	   sum=num+b;
    }
       nexta=b;
       nextb=num;
       a=nexta;
       b=nextb;
    }
cout<<sum;
}
