#include<simplecpp>

main_program{

	double answer=1.0;
	int n;
	cin>>n;
	int i=1,j=1;
	repeat(n)
	{
	  if(j%2!=0)
	  {
	  answer=answer-(1/((2.0*i)+1));
	  }
	  else
	  {
	  answer=answer+(1/((2.0*i)+1));
	  }
	  i++;
	  j++;
	}
	cout<<4*answer;

}
