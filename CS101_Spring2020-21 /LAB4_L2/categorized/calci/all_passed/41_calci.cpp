#include<simplecpp>
main_program{
int Q;
cin>>Q;
char oper;
float num1,num2,answer,a;
repeat(Q)
{
cin>>num1>>oper>>num2;
switch(oper)
{
case '+' :answer=num1+num2;cout<<answer<<endl;break;
case '-' : answer=num1-num2;cout<<answer<<endl;break;
case '*' : answer=num1*num2;cout<<answer<<endl;break;
case '/': answer=num1/num2;cout<<answer<<endl;break;
default : a=-1;cout<<a<<endl;
}


}

}
