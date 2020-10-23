#include<simplecpp>

main_program{

	float n, a, b;
	char op;
	cin>>n;
	repeat(n){
	cin>>a;
	cin>>op;
	cin>>b;
	switch(op){
	case '+':
	cout<<a+b<<endl;
	break;
	case '-':
	cout<<a-b<<endl;
	break;
	case '*':
	cout<<a*b<<endl;
	break;
	case '/':
	cout<<a/b<<endl;
	break;
	default: cout<<"-1"<<endl;}}
}
