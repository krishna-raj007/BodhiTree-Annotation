#include<simplecpp>

main_program{
int n;
float b,num1,num2;
char a;
cin >>n;
repeat(n){
cin >>num1 >>a >>num2;
switch(a){
case '+':
    b=num1+num2;
break;
case '-':
    b=num1-num2;
break;
case '*':
    b=num1*num2;
break;
case '/':
    b=num1/num2;
break;
default:
    b=-1;
}
cout <<b <<endl;
}
}
