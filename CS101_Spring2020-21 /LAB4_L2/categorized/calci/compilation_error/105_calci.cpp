#include<simplecpp>

main_program
{int n;
float Num1,Num2;
char Operator;
cin>>n;
repeat(n)
{
cin>>Num1;
cin>>Operator;
cin>>Num2;
switch(Operator)
{
case '+':
    {
cout<<Num1+Num2<<"\n";
case '-':
    {
cout<<Num1-Num2<<"\n";
break;}
case '*':
    {
cout<<Num1*Num2<<"\n";
break;}
case '/':
{cout<<Num1/Num2<<"\n";
break;}
default:
{cout<<-1<<"\n";
break;}
}
}
}
