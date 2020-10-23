#include<simplecpp>

main_program{
int n;
float a,b;
char op;
cin>>n;
repeat (n){
     cin>>a>>op>>b;
switch(op){
case '+':
cout<<a+b<<endl;
break;
case '-':
cout<<a-b<<endl;
break;
case '/':
cout<<a/b<<endl;
break;
case '*':
cout<<a*b<<endl;
break;
default:
cout<<-1;
}
}
}
