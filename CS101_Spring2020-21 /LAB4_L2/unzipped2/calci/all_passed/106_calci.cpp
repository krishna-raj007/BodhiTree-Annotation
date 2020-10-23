#include<simplecpp>

main_program{

	float z,num1,num2;
	int n;
	char a;
	cin>>n;
	repeat(n){
	cin>>num1>>a>>num2;
	switch(a){
	case '+':
	z=num1+num2;
	break;
	case '-':
	z=num1-num2;
	break;
	case '*':
	z=num1*num2;
	break;
	case'/':
	z=num1/num2;
	break;
	default:
	z=-1;
	}
	cout<<z<<"\n";

	}

}
