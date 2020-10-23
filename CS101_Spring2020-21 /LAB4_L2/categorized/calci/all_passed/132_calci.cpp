#include<simplecpp>


main_program{
 int q;
 float num1,num2;
 char oper;
 cin>>q;

 repeat(q){
 cin>>num1>>oper>>num2;
 switch(oper){
  case '+': num1+num2;
  cout<<num1+num2<<endl;
  break;

  case'-':num1-num2;
  cout<<num1-num2<<endl;
  break;

  case'*':num1*num2;
  cout<<num1*num2<<endl;
  break;

  case'/':num1/num2;
  cout<<num1/num2<<endl;
  break;

  default:cout<<"-1"<<endl;
 }
}
}
