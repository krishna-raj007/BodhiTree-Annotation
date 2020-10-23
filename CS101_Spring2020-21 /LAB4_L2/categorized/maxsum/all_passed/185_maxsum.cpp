#include<simplecpp>

main_program{

	int n;
	long int a1,a2,sum=0,value;

	cin>>n;     //no of queries
	cin>>a1;
	cin>>a2;
	sum=a1+a2;

	repeat(n-2)
	{
        cin>>value;
        sum=max(sum,a2+value);
        a2=value;
	}

    cout<<sum;
}
