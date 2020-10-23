#include<simplecpp>
main_program{
int n;
float a,b;
char c;
cin>>n;
repeat(n){
cin>>a>>c>>b;
switch(c){
case '+':
cout<<a+b ;
break;
case '-':
cout<<a-b;
break;
case '*':
cout<<a*b;
break;
case '/':
cout<<a/b;
break;
default :
cout<<"-1";

}
cout<<endl;
}}
