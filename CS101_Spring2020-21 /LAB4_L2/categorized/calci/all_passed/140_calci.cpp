#include<simplecpp>
main_program{

char o;
int Q, Num1, Num2;
float r;
cin>>Q;
repeat(Q){
cin>>Num1>>o>>Num2;
switch(o){
case '+': r=Num1+Num2;
cout<<r<<endl;
break;
case '-': r=Num1-Num2;
cout<<r<<endl;
break;
case '/': r=Num1*1.0/Num2;
cout<<r<<endl;
break;
case '*': r=Num1*Num2;
cout<<r<<endl;
break;
default:cout<<-1<<endl;
}
}
}
