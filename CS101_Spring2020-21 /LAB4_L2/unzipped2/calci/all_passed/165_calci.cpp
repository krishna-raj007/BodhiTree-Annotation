#include<simplecpp>

main_program{
float a,b;
int n;
char opr;
cin>>n;
repeat(n)
{cin>>a>>opr>>b;
 switch(opr)
 {
    case '+' :
    cout<<a+b<<endl;
    break;
    case '*' :
    cout<<a*b<<endl;
    break;
    case '/' :
    cout<<a/b<<endl;
    break;
    case '-' :
    cout<<a-b<<endl;
    break;
    default : cout<<-1<<endl;
 }
}

	//Write your code here

}
