#include<simplecpp>

main_program{
int q;cin>>q;
repeat(q){
float num1,num2 ;
char oper;
cin>>num1>>oper>>num2;
switch(oper){
  case '+' :cout<<(num1+num2); break;
  case '-' : cout<<(num1- num2 );break;
  case '*': cout<<(num1*num2);break;
  case '/' : cout<<(num1/num2)*1.0 ;break;




default : cout<<"-1"<<endl;break;}
}
}
