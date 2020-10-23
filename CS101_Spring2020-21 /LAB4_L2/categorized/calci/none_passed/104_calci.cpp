#include<simplecpp>

main_program{
int n;
cin>>n;
float num1,num2;
char o;
repeat(n)
{
cin>>num1>>num2;
cin>>o;
if(o=='+')
cout<<num1+num2;
if(o=='*')
cout<<num1*num2;
if(o=='/')
cout<<num1/num2;
if(o=='-')
cout<<num1-num2;
}
}
