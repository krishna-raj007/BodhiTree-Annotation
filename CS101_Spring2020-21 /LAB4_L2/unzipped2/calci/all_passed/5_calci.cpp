#include<simplecpp>

main_program{

int q;
float num1,num2;	//Write your code here
char op;
cin>> q;
repeat(q){
cin>>num1>>op>>num2;
switch(op){
case '+' :cout<<"\n"<<num1+num2<<endl;
break;
case '-': cout<<"\n"<<num1-num2<<endl;
break;
case'/': cout<<"\n"<< num1/num2<<endl;
break;
case '*': cout<<"\n"<<num1*num2<<endl;
break;
default: cout<<"\n"<<-1;
}
}
}
