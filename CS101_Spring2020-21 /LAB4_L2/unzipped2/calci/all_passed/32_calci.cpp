#include<simplecpp>
main_program{
int Q;
float a,b;
char op;
cin>>Q;
repeat(Q){
cin>>a>>op>>b;
switch(op){
case '+':
cout<<a+b<<endl;break;
case '-':
cout<<a-b<<endl;break;
case '/':
cout<<a/b<<endl;break;
case '*':
cout<<a*b<<endl;
break;
default: cout<<"-1"<<endl;}
}
}
