#include<simplecpp>

main_program{
int q;

cin>>q;
float num1,num2;
char X;

repeat(q){ cin>>num1>>X>>num2;
switch(X){
case '+': cout<<num1+num2<<endl;break;
case'*':cout<<num1*num2<<endl;break;
case'-': cout<<num1-num2<<endl;break;
case'/':cout<<num1/num2<<endl;break;


   default:cout<<"-1"<<endl;break;
   }}}
