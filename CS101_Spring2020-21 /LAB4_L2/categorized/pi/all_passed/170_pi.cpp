#include<simplecpp>

main_program{

	//Write your code here
	int n;
	double temp=1,answer=0,i=0,t;
	cin>>n;
	while(i<=n)
	{
	    t=2*i+1;
      temp=pow(-1,i)/t;
      answer=answer+temp;
      i++;
	}
	cout<<4*answer<<endl;

}
