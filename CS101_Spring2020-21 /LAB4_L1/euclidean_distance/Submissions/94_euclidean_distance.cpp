#include<simplecpp>

main_program{

	int nq,nd;
	cin>>nq;
	//float sum=0;
	repeat(nq)
	{
	    float sum=0;
	cin>>nd;
	repeat(nd)
	{
	float a=0,b=0,d=0;
	cin>>a>>b;
	d=(a-b)*(a-b);
	sum=sum+d;
	}
	sum=sqrt(sum);
	printf("%.2f\n",sum);
	}

}
