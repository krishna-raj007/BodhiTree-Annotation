#include<simplecpp>

main_program{

	int n;
	double sum=0;
	cin>>n;

	for(int r=0;r<=n;r++)
    {
    sum=sum+pow(-1,r)/(2*r+1);
    }
    cout<<4*sum;

}


