#include<simplecpp>

main_program{

	//Write your code here
	long int sum2=0,n;
	long int d=1;
	int q;
	cin>>q;
    repeat(q)
	{
	    long int n,sum1;
	    cin>>n;


	    sum1=n+d;
	    if(sum1>sum2)
	    sum2=sum1;
	    d=n;
	}
    cout<<sum2;
}
