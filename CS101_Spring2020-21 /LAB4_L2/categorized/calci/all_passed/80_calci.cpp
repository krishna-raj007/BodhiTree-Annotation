#include<simplecpp>

main_program{
float n,num1,num2,s;
char op;
cin>>n;
repeat(n){
cin>>num1>>op>>num2;


switch(op){
case '+':
    s= num1 + num2;
break;
case '-':
    s =num1-num2;
break;
case '*':
    s= num1*num2;
break;
case '/':
    s= num1/num2;
break;
default:
    s=-1;


}
cout<<s<<endl;
}
}
