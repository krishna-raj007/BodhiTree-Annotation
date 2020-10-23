#include<simplecpp>
main_program{
int Q;
cin>>Q;
char command;
float a,b;

repeat(Q){
cin>>a>>command>>b;
switch(command){
case '+'
:
cout<<a+b<<endl;
    break;
case '-'
:
cout<<a-b<<endl;
break;
case '*'
:
cout<<a*b<<endl;
break;
case '/'
:
cout<<a/b<<endl;
break;
default: cout<<"-1,"<<endl;
}}}
