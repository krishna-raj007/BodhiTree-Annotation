#include<simplecpp>

main_program{

	//Write your code here
int Q;
char o;
float a,b;
cin>>Q;
repeat(Q)
{
cin>>a>>o>>b;

switch(o)
{case '+':cout<<a+b<<endl;
break;
case '-':cout<<a-b<<endl;
break;
case '*':cout<<a*b<<endl;
break;
case '/':cout<<a/b<<endl;
break;
default:cout<<"-1"<<endl;
}
}
}

