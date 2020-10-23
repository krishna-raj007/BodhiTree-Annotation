#include<simplecpp>

main_program{
int Q;
float num1,num2;
char op;
cin>>Q;
repeat(Q){

cin>>num1>>op>>num2;
switch(op){
case '+' :cout<<num1+num2<<endl;break;
case '-':cout<<num1-num2<<endl;break;
case '*':cout<<num1*num2<<endl;break;
case '/':cout<<num1/num2<<endl;break;
dwfault:cout<<"-1";

      }
   }
}
