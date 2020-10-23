#include<simplecpp>

main_program{

	int q;
	cin>>q;
	float num1,num2;
	char o;
	double ans;
	repeat(q)
	{
	cin>>num1>>o>>num2;
	switch(o)
	{
	case'+':
	ans=num1+num2;
	break;
	case'-':
	ans=num1-num2;
	break;
	case'*':
	ans=num1*num2;
	break;
	case'/':
	ans=num1/num2;
	break;
	default:
	ans=-1;


	}

	cout<<ans<<endl;
	}

}
