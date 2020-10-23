#include<simplecpp>

main_program{

	//Write your code here
	int n;
	double sum=1.0,i=1.0;
	cin>>n;
	repeat(n)
	{
	    sum=sum + pow(-1,i)*1/(2*i+1) ;
	    i++;
	}
	cout<<4*sum<<endl;
}

