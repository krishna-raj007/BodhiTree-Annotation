#include<simplecpp>

main_program{
int q;
	double n1,n2;
	char op;
	cin>>q;
	repeat(q)
	{
	cin>>n1>>op>>n2;
	if(op=='+')cout<<n1+n2<<endl;
	else if(op=='-')cout<<n1-n2<<endl;
	else if(op=='/')cout<<n1/n2<<endl;
	else if(op=='*')cout<<n1*n2<<endl;
	else
	{
	cout<<-1<<endl;
	}
	}

}
