#include<simplecpp>
main_program{
char command;
float a,b,n;
cin>>n;
repeat(n){
    cin>>a>>command>>b;


switch(command){
case '+':cout<<a+b<<endl;
break;
case '-':cout<<a-b<<endl;
break;
case'*': cout<<a*b<<endl;
break;
case'/':cout<<a/b<<endl;
break;
case'$':cout<<"-1"<<endl;
break;

default:cout<<"-1";
}
}}
