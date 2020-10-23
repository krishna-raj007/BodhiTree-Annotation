#include<simplecpp>

main_program{
int Q;
cin>>Q;
repeat(Q){
 float num1,num2;
 char opera8tor;
 cin>>num1>>opera8tor>>num2;
 switch(opera8tor){
  case'+':cout<<num1+num2<<endl;break;
  case'-':cout<<num1-num2<<endl;break;
  case'/':cout<<num1/num2<<endl;break;
  case'*':cout<<num1*num2<<endl;break;
  default:cout<<"-1";
  }
 }

}
